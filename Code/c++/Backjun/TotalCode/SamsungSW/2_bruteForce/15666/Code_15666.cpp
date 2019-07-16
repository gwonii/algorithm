//
// Created by hoho on 2019-07-08.
//

#include "Code_15666.h"

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#define MAX 9

using namespace std;

int N_15666, M_15666;
int inputArr_15666[MAX];
vector<int> targetVector_15666;
set<vector<int>> outputSet_15666;

bool canPrint_15666() {
    for (int i = 0; i < M_15666 - 1; i++) {
        if (targetVector_15666[i] > targetVector_15666[i + 1]) {
            return false;
        }
    }
    return true;
}

void reculsive_15666(){

    if (targetVector_15666.size() == M_15666) {
        if(canPrint_15666()){
            outputSet_15666.insert(targetVector_15666);
        }
        return;
    } else {
        for (int i = 0; i < N_15666; i++) {
            targetVector_15666.push_back(inputArr_15666[i]);
            reculsive_15666();
            targetVector_15666.pop_back();
        }
    }
}


void method_15666(){

    cin >> N_15666 >> M_15666;

    for(int i = 0; i < N_15666; i++){
        cin >> inputArr_15666[i];
    }

    sort(inputArr_15666, inputArr_15666 + N_15666);

    reculsive_15666();


    for(vector<int> i : outputSet_15666){
        for(int j : i){
            cout << j << " ";
        }
        cout << "\n";
    }
}