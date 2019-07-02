//
// Created by hoho on 2019-07-02.
//

#include "Code_10973.h"

#include <iostream>
#include <algorithm>

using namespace std;

int N_10973;
int inputNum_10973[10001];

void method_10973() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_10973;

    for (int i = 0; i < N_10973; i++) {
        cin >> inputNum_10973[i];
    }

    if (prev_permutation(inputNum_10973, inputNum_10973 + N_10973)) {
        for (int i = 0; i < N_10973; i++) {
            cout << inputNum_10973[i] << " ";
        }
    } else {
        cout << -1 << "\n";
    }
}