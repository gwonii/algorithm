# BFS-and-DFS



### 1.1 BFS ( Breadth First Search)

- 탐색을할 때 너비를 우선으로 하여 탐색을 수행하는 탐색 알고리즘 
- `최단 경로`를 찾아준다는 점에서 최단 길이를 보장해야 할 때 많이 사용된다. 
- 맹목적으로 각 노드를 탐색할 때 사용된다. 
- 자료구조, 큐가 사용됨

```c++
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
```

#### 1.2 DFS (Depth First Search)

- 탐색을 할 때 깊은 것을 우선으로 하여 탐색을 수행하는 탐색 알고리즘 
- 맹목적으로 각 노드를 탐색할 때 사용된다. 
- 자료구조, 스택이 사용됨 

```c++
void inner_dfs(int x){
    if(c[x]){
        return ;        // 한 번씩만 거쳐가기 때문에 true가 된다는 것은
                        // 다시 처음 start로 온 것을 의미함
    }
    c[x] = true;
    cout << x << ' ';
    for(int i = 0; i < a[x].size(); i++){
        int y = a[x][i];
        inner_dfs(y);
    }
}
```

