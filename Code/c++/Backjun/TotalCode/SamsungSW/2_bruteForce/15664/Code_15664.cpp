//
// Created by hoho on 2019-07-08.
//

#include "Code_15664.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

#define MAX 9

using namespace std;


int N_15664, M_15664;
int inputArr_15664[MAX];
vector<int> targetVector_15664;
set<vector<int>> outputSet_15664;



void reculsive_15664(int index, int count) {

    targetVector_15664.resize(M_15664);

    if (index == M_15664) {
        outputSet_15664.insert(targetVector_15664);

        return;
    } else if (count > N_15664 - 1) {
        return;
    }

    targetVector_15664[index] = inputArr_15664[count];


    reculsive_15664(index + 1, count + 1);
    reculsive_15664(index, count + 1);


}

void method_15664() {

    cin >> N_15664 >> M_15664;

    for (int i = 0; i < N_15664; i++) {
        cin >> inputArr_15664[i];
    }

    sort(inputArr_15664, inputArr_15664 + N_15664);

    reculsive_15664(0, 0);

    for(vector<int> i : outputSet_15664){
        for(int j : i){
            cout << j << " ";
        }
        cout << "\n";
    }
}