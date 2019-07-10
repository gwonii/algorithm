//
// Created by hoho on 2019-07-08.
//

#include "Code_15665.h"

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#define MAX 9

using namespace std;

int N_15665, M_15665;
int inputArr_15665[MAX];
vector<int> targetVector_15665;
set<vector<int>> outputSet_15665;

void reculsive_15665() {


    if (targetVector_15665.size() == M_15665) {
        outputSet_15665.insert(targetVector_15665);
        return;
    } else {
        for (int i = 0; i < N_15665; i++) {
            targetVector_15665.push_back(inputArr_15665[i]);
            reculsive_15665();
            targetVector_15665.pop_back();
        }
    }
}

void method_15665() {

    cin >> N_15665 >> M_15665;

    for(int i = 0; i < N_15665; i++){
        cin >> inputArr_15665[i];
    }

    sort(inputArr_15665, inputArr_15665 + N_15665);

    reculsive_15665();

    for(vector<int> i : outputSet_15665){
        for(int j : i){
            cout << j << " ";
        }
        cout << "\n";
    }
}