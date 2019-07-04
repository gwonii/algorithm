//
// Created by hoho on 2019-07-03.
//

#include "Code_15650.h"

#include <iostream>

#define MAX 9

using namespace std;

int N_15650, M_15650;
int arr[MAX];
int targetArr[MAX];

void dfs_15650(int index, int count) {

    if (index == M_15650){
        for(int i = 0; i < M_15650; i++){
            cout << targetArr[i] << " ";
        }
        cout << "\n";
        return ;
    } else if (count >= N_15650) return ;
    else {
        targetArr[index] = arr[count];

        dfs_15650(index + 1, count + 1);
        dfs_15650(index, count + 1);
    }
}

void method_15650() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_15650 >> M_15650;

    for (int i = 0; i < N_15650; i++) {
        arr[i] = i + 1;
    }

    dfs_15650(0,0);

}