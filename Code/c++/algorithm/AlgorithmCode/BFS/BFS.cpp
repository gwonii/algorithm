//
// Created by hoho on 2019-06-27.
//

#include "BFS.h"

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int bfsNumber = 7;
int bfsC[7];
vector<int> bfsA[8];

void bfs(int start) {
    queue<int> q;   // 노드에서 하나씩 넣어 놓을 큐
    q.push(start);
    bfsC[start] = true;

    while(!q.empty()){
        int x = q.front();
        q.pop();

        cout << x << "\n";

        for(int i = 0; i < bfsA[x].size(); i++){
            // a[x].size()는 한 노드에 총 연결된 선의 수
            int y = bfsA[x][i];
            if(!bfsC[y]){  // 해당 노드가 거쳐가지 않았다면,
                q.push(y);
                bfsC[y] = true;
            }
        }
    }
}

void method_BFS() {

    // 1 - 2
    bfsA[1].push_back(2);
    bfsA[2].push_back(1);

    // 1 - 3
    bfsA[1].push_back(3);
    bfsA[3].push_back(1);

    // 2 - 3
    bfsA[2].push_back(3);
    bfsA[3].push_back(2);

    // 2 - 4
    bfsA[2].push_back(4);
    bfsA[4].push_back(2);

    // 2 - 5
    bfsA[2].push_back(5);
    bfsA[5].push_back(2);

    // 3 - 6
    bfsA[3].push_back(6);
    bfsA[6].push_back(3);

    // 3 - 7
    bfsA[3].push_back(7);
    bfsA[7].push_back(3);

    // 4 - 5
    bfsA[4].push_back(5);
    bfsA[5].push_back(4);

    // 6 - 7
    bfsA[6].push_back(7);
    bfsA[7].push_back(6);

    bfs(1);

}