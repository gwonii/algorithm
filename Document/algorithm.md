## 1. algorithm



### 1. 정렬

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

* 일명 완전 탐색이라고도 불린다. 가능한 경우를 일일이 다 탐색하는 것 
* 틀릴 일은 절대 없지만, 최악의 경우 시간이 많이 걸릴 수 있다. 

> 관련 문제 2309, 2231, 3085, 10448, 2503, 1018, 1182 등

### 6. BFS / DFS

#### 6.1 BFS ( Breadth First Search)

* 탐색을할 때 너비를 우선으로 하여 탐색을 수행하는 탐색 알고리즘 
* `최단 경로`를 찾아준다는 점에서 최단 길이를 보장해야 할 때 많이 사용된다. 
* 맹목적으로 각 노드를 탐색할 때 사용된다. 
* 자료구조, 큐가 사용됨

#### 6.2 DFS (Depth First Search)

* 탐색을 할 때 깊은 것을 우선으로 하여 탐색을 수행하는 탐색 알고리즘 
* 맹목적으로 각 노드를 탐색할 때 사용된다. 
* 자료구조, 스택이 사용됨 









