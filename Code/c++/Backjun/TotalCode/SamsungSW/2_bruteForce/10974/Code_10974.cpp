//
// Created by hoho on 2019-07-02.
//

#include "Code_10974.h"

#include <iostream>
#include <algorithm>

using namespace std;

int N_10974;
int numArr[9];

void method_10974() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_10974;

    for (int i = 0; i < N_10974; i++){
        numArr[i] = i + 1;
    }

    do {
        for (int i = 0; i < N_10974; i++){
            cout << numArr[i] << " ";
        }
        cout << "\n";

    } while(next_permutation(numArr, numArr + N_10974));

}