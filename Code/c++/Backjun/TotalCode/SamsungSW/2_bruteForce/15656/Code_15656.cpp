//
// Created by hoho on 2019-07-04.
//

#include "Code_15656.h"

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 8

using namespace std;

int N_15656, M_15656;
int arr_15656[MAX];
vector<int> targetVector_15656;

void reculsive_15656() {

    if(targetVector_15656.size() == M_15656){
        for(int target : targetVector_15656){
            cout << target << " ";
        }
        cout << "\n";
        return ;
    } else {
        for(int i = 0; i < N_15656; i++){
            targetVector_15656.push_back(arr_15656[i]);
            reculsive_15656();
            targetVector_15656.pop_back();
        }
    }
}

void method_15656() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_15656 >> M_15656;

    for (int i = 0; i < N_15656; i++) {
        cin >> arr_15656[i];
    }

    sort(arr_15656, arr_15656 + N_15656);

    reculsive_15656();

}