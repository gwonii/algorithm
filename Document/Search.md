# Search



### 2. 탐색

------

#### 2.1 순차 탐색

- 데이터의 정렬 유무와 상관없이 앞에서부터 데이터를 하나씩 확인하여 탐색하는 알고리즘

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

- 데이터가 이미 정렬되어 있는 상태에서 범위를 반씩 좁혀가며 데이터를 빠르게 탐색하는 알고리즘

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

- 시간 복잡도는 O(logN)이다. 