//
// Created by hoho on 2019-07-12.
//

#include "Code_1260.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define MAX_NODE 1001

using namespace std;

int N_1260, M_1260;
vector<int> relation_1260[MAX_NODE];
int startV_1260;
bool visitD_1260[MAX_NODE] = {false, };
bool visitB_1260[MAX_NODE] = {false, };


void dfs_1260(int index) {

    sort(relation_1260[index].begin(), relation_1260[index].end() );


    visitD_1260[index] = true;
    cout << index << " ";
    for (int i = 0; i < relation_1260[index].size(); i++) {
        int next = relation_1260[index][i];
        if (visitD_1260[next]) {
            continue;
        } else {
            dfs_1260(next);
        }
    }
}


void bfs_1260(int index) {

   sort(relation_1260[index].begin(), relation_1260[index].end() );

    queue<int> q;
    q.push(index);
    visitB_1260[index] = true;
    while(!q.empty()){
        index = q.front();
        cout << q.front() << " ";
        q.pop();
        for(int i = 0; i < relation_1260[index].size() ; i++){
            if(visitB_1260[relation_1260[index][i]]){
                continue;
            } else {
                q.push(relation_1260[index][i]);
                visitB_1260[relation_1260[index][i]] = true;
            }
        }
    }
}

void makeNodeDiagram() {

    int a, b;
    cin >> a >> b;
    relation_1260[a].push_back(b);
    relation_1260[b].push_back(a);

}


void method_1260() {

    cin >> N_1260 >> M_1260;

    cin >> startV_1260;

    for (int i = 0; i < M_1260; i++) {
        makeNodeDiagram();
    }


    dfs_1260(startV_1260);
    cout << "\n";
    bfs_1260(startV_1260);


}