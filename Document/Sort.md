# Sort

### 1. 정렬

------

#### 1.1 버블 정렬 

- 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보낸다. 
- 시간 복잡도 : O(N^2)

#### 1.2 퀵 정렬 

- 특정한 값을 기준으로 큰 숫자와 작은 숫자를 나눈다. 
- 시간 복잡도 : O(NlogN)

> <https://gmlwjd9405.github.io/2018/05/10/algorithm-quick-sort.html>
>
> 알고리즘 진행 과정 

#### 1.3 C++ STL sort 함수

- 기본적으로 `#include <algorithm>`에 함수들이 담겨 있다. 

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

