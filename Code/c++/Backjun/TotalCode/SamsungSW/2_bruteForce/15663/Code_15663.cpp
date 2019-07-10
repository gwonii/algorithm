//
// Created by hoho on 2019-07-04.
//

#include "Code_15663.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <math.h>


#define MAX 9

using namespace std;

int N_15663, M_15663;
int arr_15663[MAX];
bool check_15663[MAX] = {false, };
vector<int> targetVector_15663;
set<vector<int>> outputSet_15663;


void reculsive_15663() {


    if (targetVector_15663.size() == M_15663) {
        outputSet_15663.insert(targetVector_15663);
        return;
    } else {
        for (int i = 0; i < N_15663; i++) {
            if (!check_15663[i]) {
                check_15663[i] = true;
                targetVector_15663.push_back(arr_15663[i]);
                reculsive_15663();
                targetVector_15663.pop_back();
                check_15663[i] = false;
            }
        }
    }
}

void method_15663() {


    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_15663 >> M_15663;

    for (int i = 0; i < N_15663; i++) {
        cin >> arr_15663[i];
    }

    sort(arr_15663, arr_15663 + N_15663);

    reculsive_15663();

    for(vector<int> i : outputSet_15663){
        for(int j : i){
            cout << j << " ";
        }
        cout << "\n";
    }

}