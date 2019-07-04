//
// Created by hoho on 2019-07-03.
//

#include "Code_15652.h"

#include <iostream>
#include <vector>


using namespace std;

int N_15652, M_15652;
vector<int> targetVec_15652;

bool can_print_15652() {
    for (int i = 0; i < targetVec_15652.size() - 1; i++) {
        if (targetVec_15652[i] > targetVec_15652[i + 1]) {
            return false;
        }
    }
    return true;
}

void reculsive_15652() {

    if (targetVec_15652.size() == M_15652) {
        if (can_print_15652()) {
            for (int i = 0; i < M_15652; i++) {
                cout << targetVec_15652[i] << " ";
            }
            cout << "\n";
            return;
        }

    } else {
        for (int i = 0; i < N_15652; i++) {

            targetVec_15652.push_back(i + 1);
            reculsive_15652();
            targetVec_15652.pop_back();

        }
    }
}

void method_15652() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_15652 >> M_15652;

    reculsive_15652();

}