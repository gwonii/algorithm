//
// Created by hoho on 2019-07-04.
//

#include "Code_15657.h"

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 9

using namespace std;

int N_15657, M_15657;
int arr_15657[MAX];
vector<int> targetVector_15657;

bool canPrint_15657() {
    for (int i = 0; i < M_15657 - 1; i++) {
        if (targetVector_15657[i] > targetVector_15657[i + 1]) {
            return false;
        }
    }
    return true;
}

void reculsive_15657() {

    if (targetVector_15657.size() == M_15657) {
        if (canPrint_15657()) {
            for (int i = 0; i < M_15657; i++) {
                cout << targetVector_15657[i] << " ";
            }
            cout << "\n";
        }
        return;

    } else {
        for (int i = 0; i < N_15657; i++) {
            targetVector_15657.push_back(arr_15657[i]);
            reculsive_15657();
            targetVector_15657.pop_back();
        }
    }
}

void method_15657() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_15657 >> M_15657;

    for (int i = 0; i < N_15657; i++) {
        cin >> arr_15657[i];
    }

    sort(arr_15657, arr_15657 + N_15657);

    reculsive_15657();

}