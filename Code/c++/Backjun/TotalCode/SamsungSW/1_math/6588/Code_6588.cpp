//
// Created by hoho on 2019-06-26.
//

#include "Code_6588.h"
#include <iostream>
#include <vector>

int const MAX_SIZE = 1000001;

using namespace std;

void method_6588() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int const MAX = 1000001;
    bool canFalg = false;

    bool isPrime[MAX];
    vector<int> primeNum;

    for (int i = 2; i < MAX; i++) {
        isPrime[i] = true;
    }
    for (int i = 2; i < MAX; i++) {
        for (int j = 2 * i; j < MAX; j += i) {
            if (!isPrime[j])
                continue;
            isPrime[j] = false;
        }
    }

    for (int i = 3; i < MAX; i++) {
        if (isPrime[i])
            primeNum.push_back(i);
    }

    while (true) {
        int N;
        cin >> N;

        if (N == 0) {
            break;
        }

        for (int i = 0; i < primeNum.size(); i++) {
            if (isPrime[N - primeNum[i]]) {
                cout << N << " = " << primeNum[i] << " + " <<
                     N - primeNum[i] << "\n";
                canFalg = true;
                break;
            }
        }
        if (!canFalg) {
            cout << "\"Goldbach's conjecture is wrong.\"" << "\n";
        }
    }
}

