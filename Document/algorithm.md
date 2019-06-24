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