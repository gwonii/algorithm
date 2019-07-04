//
// Created by hoho on 2019-07-04.
//

#include "Code_15654.h"

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 9

using namespace std;

int N_15654, M_15654;
int arr_15654[MAX];
bool check_15654[MAX];
vector<int> targetVector_15654;


void reculsive_15654() {

    if(targetVector_15654.size() == M_15654){
        for(int i = 0; i < targetVector_15654.size(); i++){
            cout << targetVector_15654[i] << " ";
        }
        cout << "\n";
    } else {
        for(int i = 0; i < N_15654; i++){
            if(!check_15654[i]){
                check_15654[i] = true;
                targetVector_15654.push_back(arr_15654[i]);
                reculsive_15654();
                targetVector_15654.pop_back();
                check_15654[i] = false;
            }
        }
    }
}

void method_15654(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_15654 >> M_15654;

    for(int i = 0; i < N_15654; i++){
        cin >> arr_15654[i];
    }
    sort(arr_15654, arr_15654 + N_15654);

    reculsive_15654();
}