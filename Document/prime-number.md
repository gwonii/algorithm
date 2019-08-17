# Prime-number

### 1. 소수 찾기 

------

- 소수를 찾는 방법은 여러 가지가 있다.

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