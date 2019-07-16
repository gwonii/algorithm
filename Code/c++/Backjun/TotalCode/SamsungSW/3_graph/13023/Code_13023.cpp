//
// Created by hoho on 2019-07-12.
//

#include "Code_13023.h"

#include <iostream>
#include <vector>

#define MAX 2001

using namespace std;

int N_13023, M_13023;
vector<int> relation[MAX];
bool answer, visited[MAX];


void dfs_13023(int index, int count) {

    if (count == 5) {
        answer = true;
        return;
    }
    visited[index] = true;

    for (int i = 0; i < relation[index].size(); i++) {
        int next = relation[index][i];
        if (visited[next]) {
            continue;
        }

        dfs_13023(next, count + 1);

        if (answer) {
            return;
        }
    }
    visited[index] = false;
}


void method_13023() {

    cin >> N_13023 >> M_13023;

    for (int i = 0; i < M_13023; i++) {
        int a, b;
        cin >> a >> b;
        relation[a].push_back(b);
        relation[b].push_back(a);
    }

    for(int i = 0; i < N_13023; i++){
        dfs_13023(i, 1);
        if(answer){
            break;
        }
    }


    if (answer) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
}