//
// Created by hoho on 2019-07-04.
//

#include "Code_15655.h"

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 9

using namespace std;

int N_15655, M_15655;
int arr_15655[MAX];
int targetArr_15655[MAX];

void reculsive_15655(int index, int count) {

    if (index == M_15655) {

            for (int i = 0; i < M_15655; i++) {
                cout << targetArr_15655[i] << " ";
            }
            cout << "\n";
            return ;

    } else if(count >= N_15655) return;
    else {
        targetArr_15655[index] = arr_15655[count];
        reculsive_15655(index + 1, count + 1);
        reculsive_15655(index, count + 1);
    }
}

void method_15655() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_15655 >> M_15655;

    for (int i = 0; i < N_15655; i++) {
        cin >> arr_15655[i];
    }

    sort(arr_15655, arr_15655 + N_15655);

    reculsive_15655(0,0);
}

//bool canPrint_15655() {
//
//    for (int i = 0; i < M_15655 - 1; i++) {
//        if (targetArr_15655[i] > targetArr_15655[i + 1]) {
//            return false;
//        }
//    }
//    return true;
//}