//
// Created by hoho on 2019-07-14.
//

#include "Code_11724.h"

#include <iostream>
#include <vector>

#define MAX_NODE 1001

using namespace std;

int N_11724, M_11724;
vector<int> relation_11724[MAX_NODE];
bool visit_11724[MAX_NODE] = {false,};
int connectCount = 0;

void solution_11724(int index) {

    visit_11724[index] = true;

    for (int i = 0; i < relation_11724[index].size(); i++) {
        int next = relation_11724[index][i];
        if(visit_11724[next]){
            continue;
        } else {
            solution_11724(next);
        }
    }
}

void method_11724() {

    cin >> N_11724 >> M_11724;

    for (int i = 0; i < M_11724; i++) {
        int a, b;
        cin >> a >> b;
        relation_11724[a].push_back(b);
        relation_11724[b].push_back(a);
    }

    for (int i = 0; i < N_11724; i++) {
        if(!visit_11724[i + 1]) {
            solution_11724(i + 1);
            connectCount++;
        }
    }

    cout << connectCount << "\n";
}