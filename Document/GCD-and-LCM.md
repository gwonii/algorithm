# GCD and LCM

### 1. 최대공약수 (GCD)와 최소공배수 (LCM)

------

#### 1.1 최대공약수 

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

#### 1.2 최소공배수 

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