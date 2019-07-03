//
// Created by hoho on 2019-07-03.
//

// 방법론 1. 재귀

#include "Code_15649.h"

#include <iostream>
#include <vector>

#define MAX 9
using namespace std;


int N_15649, M_15649;
vector<int> targetArr;
bool visit[MAX];

void dfs_15649() {

    if (targetArr.size() == M_15649) {
        for (int i = 0; i < M_15649; i++) {
            cout << targetArr[i] << " ";
        }
        cout << "\n";
        return;
    } else {

        for (int i = 0; i < N_15649; i++) {
            if (!visit[i]) {
                visit[i] = true;
                targetArr.push_back(i+1);
                dfs_15649();
                targetArr.pop_back();
                visit[i] = false;
            }
        }
    }
}

void method_15649() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_15649;
    cin >> M_15649;


    dfs_15649();

}