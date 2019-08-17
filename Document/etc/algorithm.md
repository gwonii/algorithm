## 1. algorithm



### 1. 정렬

---

#### 1.1 버블 정렬 

* 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보낸다. 
* 시간 복잡도 : O(N^2)

#### 1.2 퀵 정렬 

* 특정한 값을 기준으로 큰 숫자와 작은 숫자를 나눈다. 
* 시간 복잡도 : O(NlogN)

> <https://gmlwjd9405.github.io/2018/05/10/algorithm-quick-sort.html>
>
> 알고리즘 진행 과정 

#### 1.3 C++ STL sort 함수

* 기본적으로 `#include <algorithm`에 함수들이 담겨 있다. 

#### 기본 sort함수

```c++
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[10] = {8,2,1,4,6};
    sort(a, a + 5);
    
    for(int i = 0; i < 5; i++){
        printf("%d, ", a[i]);
    }
}
```

> sort(배열의 첫 주소값, 배열의 마지막 주소값)으로 사용된다. 
>
> 그러면 기본적으로 오름차순 정렬이 된다. 
>
> 추가 : string 또한 sort 메소드를 사용할 수 있다. 

#### 내림차순 정렬하기 

```c++
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a < b;
}

int main() {
    int a[10] = {8,2,1,4,6};
    sort(a, a + 5, compare);
    
    for(int i = 0; i < 5; i++){
        printf("%d, ", a[i]);
    }
}
```

> 위의 방식처럼 새로운 compare함수를 정의하여 기본 sort함수에 compare함수를 매개함수로 주어 내림차순을 만들 수 있다. 

#### 데이터를 묶어서 정렬하는 방법 

```c++
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[10] = {8,2,1,4,6};
    sort(a, a + 5);
    
    for(int i = 0; i < 5; i++){
        printf("%d, ", a[i]);
    }
}
```



### 2. 탐색

---

#### 2.1 순차 탐색

* 데이터의 정렬 유무와 상관없이 앞에서부터 데이터를 하나씩 확인하여 탐색하는 알고리즘

```c++
#include <iostream>

using namespace std;

int main(){
    int a[] = {8,3,4,5,1,9,6,7,2,0};
    int data = 7;
    
    for (int i = 0; i < 10; i++){
        if(a[i] == data){
            printf("%d 번째에서 찾았습니다.", i + 1 );
        }
    }
}
```



#### 2.2 이분 탐색 

* 데이터가 이미 정렬되어 있는 상태에서 범위를 반씩 좁혀가며 데이터를 빠르게 탐색하는 알고리즘

```c++
#include <iostream>

using namespace std;

int search(int start, int end, int target){
    if(start > end) {
        return -1;
    }
    int mid = (start + end) / 2;
    if(a[mid] == target) {
        return mid;
    } else if(a[mid] > target) {
        return search(start, mid -1, target);
    } else {
        return search(mid + 1, end, target);
    }
}

int main() {
	
	int a[] = {1, 3, 5 ,6 ,12, 15};
	int data = 12;

    int result = search(0, 5, data);
    if(result != -1){
        printf("%d 번째에서 찾았습니다.", result + 1);
    }
}
```

* 시간 복잡도는 O(logN)이다. 



### 3. 최대공약수 (GCD)와 최소공배수 (LCM)

---

#### 3.1 최대공약수 

```c++
int gcd(int N, int M){
    while(M!= 0){
        int r = N % M;
        N = M;
        M = r;
    }
    return N;
}
```

> 이렇게 간단한 코드구현을 통해 최대공약수를 결정할 수 있다. 

#### 3.2 최소공배수 

```c++
int gcd(int N, int M){
    while(M!= 0){
        int r = N % M;
        N = M;
        M = r;
    }
    return N;
}

int lcm(int N, int M){

    return (N * M) / exampleGcd(N,M);
}
```

> 최대공약수를 이용하여 최소공배수를 구해낸다. 

### 4. 소수 찾기 

---

* 소수를 찾는 방법은 여러 가지가 있다.

#### 에라토스테네스의 체 활용  

```c++
int main(){
	int const MAX = 1001;			// 1000개 까지의 소수를 찾고 싶다.
    bool isPrime[MAX];

    for(int i = 2; i < MAX; i++){
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;

    for(int i = 2; i < MAX; i++){
        for(int j = 2 * i; j < MAX; j += i){
            if(!isPrime[j])
                continue;
            isPrime[j] = false;
        }
    }
}
```

> 참조 자료 : <https://brenden.tistory.com/50> 



### 5. brute force

---

* 일명 완전 탐색이라고도 불린다. 가능한 경우를 일일이 다 탐색하는 것 
* 틀릴 일은 절대 없지만, 최악의 경우 시간이 많이 걸릴 수 있다. 

> 관련 문제 2309, 2231, 3085, 10448, 2503, 1018, 1182 등

### 6. BFS / DFS

---

### 6.1 BFS ( Breadth First Search)

* 탐색을할 때 너비를 우선으로 하여 탐색을 수행하는 탐색 알고리즘 
* `최단 경로`를 찾아준다는 점에서 최단 길이를 보장해야 할 때 많이 사용된다. 
* 맹목적으로 각 노드를 탐색할 때 사용된다. 
* 자료구조, 큐가 사용됨

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

#### 6.2 DFS (Depth First Search)

* 탐색을 할 때 깊은 것을 우선으로 하여 탐색을 수행하는 탐색 알고리즘 
* 맹목적으로 각 노드를 탐색할 때 사용된다. 
* 자료구조, 스택이 사용됨 

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



### 7. Backtracking

---

* 기본적으로 백트래킹은 `가능한 모든 방법을 탐색한다.`는데 기본 아이디어가 있다. 
* 대표적인 완전 탐색 방법으로는 DFS가 있다. 

DFS는 현재 지점에서 방문해야할 곳이 있으면 재귀 호출을 이용해서 계속 이동한다. DFS의 장점은 무한히 깊은 곳을 찾아야할 때 효과적이다. 하지만 DFS는 모든 곳을 방문하기 때문에 굳이 목표지점이 있지 않는 경로에 빠져서 비효율적인 결과를 초래할 수 있다. 

이런 비효율적인 경로를 차단하고 목표지점에 갈 수 있는 가능성이 있는 루트를 검사하는 방법이 백트래킹 알고리즘이다. 

백트래킹은 DFS에 가지치기를 통해 가도되지 않는 루트는 고려하지 않고 탐색하는 완전탐색 기법이다. 

#### 예제 1.

##### N-Queen

크기가 N * N인 체스판 위에 퀸 N 개를 서로 공격할 수 없게 놓는 문제이다.  N이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 작성하시오 

N * N의 체스판에 을 (1, 1) 부터 시작하여 모든 위치를 트리로 만들었다고 가정했을 때 DFS를 이용하면 퀸이 움직일 수 있는 모든 경우의 수를 확인할 수 있다. 하지만 이미 가치가 없어진 경우의 수는 배제해야 한다. 그렇지 않으면 너무 많은 경우의 수를 확인해야 한다. 그렇기 때문에 **가지치기를 적절하게 사용해야 한다. **

#### 7.1 수행과정 

1. DFS 수행 :
   * 먼저 평소와 같이 DFS를 수행하여 노드를 찾는다. 
2. 유망한 노드 검토:
   * 방문한 노드를 포함해서 유망한 노드이면 서브트리로 이동하고 그렇지 않으면 백트래킹을 수행한다. 
3. 방문한 노드의 하위 노드로 이동하여 다시 재ㅟ를 통해 DFS를 수행한다. 
4. 백트래킹 수행 : 
   * 방문한 노드를 가지치기를 하고 상위 노드로 백트래킹한 후 DFS를 다시 수행한다. 

```java
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    n = sc.nextInt();

    for (int i = 1; i <= n; i++) {
        // 첫번째 퀸의 시작점은 행을 기준. (i = 1) => (1, 1), (i = 2) => (1, 2), (i = 3) => (1, 3)
        col = new int[16];
        col[1] = i;

        // 1. DFS 수행 (다음 열인 2열 이동)
        dfs(2);
    }

    // 정답 출력
    System.out.println(ans);
}

static void dfs(int row) {
    // 현재 열이 체스판을 넘어 섰으면
    if (row > n) {
        ++ans;
    } else {
        for (int i = 1; i <= n; i++) {
            // 현재 위치하고 있는 노드의 좌표를 저장 (row: 열, i: 행)
            col[row] = i;

            // 2. 유망한 노드 검토
            if (isPossible(row)) {
                // 3. 서브 트리 이동 (해당 노드의 하위 노드)
                dfs(row + 1);
            } else {
                // 4. 백트래킹 수행, 해당노드는 가지치기 되어진다.
                col[row] = 0;
            }
        }
    }
}

static boolean isPossible(int c) {
    // 이전 열들을 탐색하면서 유망한 노드인지 확인
    for (int i = 1; i < c; i++) {
        // 상위 노드에서 같은 행에 퀸이 있는지 여부
        if (col[i] == col[c]) {
            return false;
        }
        // 대각선 검사, 상위 노드의 퀸과 현재 노드의 퀸의 가로 세로 거리가 같은지 검사
        if (Math.abs(col[i] - col[c]) == Math.abs(i - c)) {
            return false;
        }
    }
    return true;
}
```



### 8. 그래프 

* 그래프가 주어지면 DFS와 BFS를 고려해볼 수 있음 
* 

