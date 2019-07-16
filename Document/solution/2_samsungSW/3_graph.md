# Graph

## 1. 13023 ( ABCDE )

### 1.1 접근 방법 

* 문제에서 원하는 조건은 A-B-C-D-E 의 관계가 존재하는지의 확인 여부이다. 
* 위 같은 조건은 DFS를 통해 확인 가능하다. 
* 그렇다면 반복되는 행동을 찾고 DFS재귀문을 사용하고, 조건이 만족되면 실행을 멈춘다. 

### 1.2 풀이 코드

```c++
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
```

### 1.3 주의사항 

* 위 코드에서 보면 DFS탐색의 시작을 모든 노드에서 확인한다. 시작지점에 따라 정답이 있을 수도 있고, 없을 수도 있기 때문에 모든 시작점에서 판단해본다! 

## 2. 1260 (DFS와 BFS)

### 2.1 접근 방법 

* 단순 DFS와 BFS를 구현해보라는 문제 
* DFS는 재귀를 이용하여, BFS는 queue를 이용하여 풀어보자 

### 2.2 풀이 코드 

```c++
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
```

### 2.3 주의사항

* DFS의 경우, 스택또는 재귀를 통해 풀 수 있다. 
* BFS의 경우, 큐를 이용하여 풀 수 있다.

## 3. 11724 ( 연결요소의 개수)

### 3.1 접근 방법

* 먼저 기본적으로 모든 노드들을 경유하며 연결상태를 확인해야 한다. 
* 그리고 그 연결상태를 분석하여 연결요소가 몇 개가 있는지 찾아야 한다. 
* `본인`은 노드 탐색에 dfs를 사용했다.  ( 어떤 방식으로든지간에 모든 노드를 경유하기만 하면 되기 때문에 )

### 3.2 풀이 코드 

```c++
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
```

### 3.3 주의 사항 

* 단순히 탐색을 하고 그런 다음 연결요소를 확인하려면 어려움이 있을 수 있다. 
* 나는 dfs재귀 함수를 모든 노드가 실행할 수 있도록  아래의 for문을 사용하였다. 

```c++
    for (int i = 0; i < N_11724; i++) {
        if(!visit_11724[i + 1]) {
            solution_11724(i + 1);
            connectCount++;
        }
    }
```

> 이렇게 for문을 통해 모든 노드에게 재귀문을 돌릴 기회를 준다. 

* 여기서 포인트는 dfs 재귀문은 한번의 시행을 통해 모든 연결고리를 탐색한다는 것이다. 위 처럼 시작 노드가 `1`이라고 가정할 때  단 한번의 `solution_11724(i + 1)`을 통해 `노드 '1'`의 모든 연결고리를 확인한다는 것이다. 그러면 그 안에서 들렸던 노드들은 visit_11724 배열에 모두 체크 되었을 것이다. 그것을 이용하여 두번 째 노드도 dfs 재귀문을 돌려고 할 때 이미 visit 배열에 체크되어 있다면 그냥 넘어가는 것이다. 이렇게 아직 들르지 않은 노드를 찾고 들르지 않은 노드를 만날 때 마다 connectCount를 증가시켜 주는 것이다!! 



  