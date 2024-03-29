## 알고리즘 



### 1. c++ 입/출력 정리 

* 기본 코드 

```c++
#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	cout<<a+b<<endl;
	return 0;
}
```



* endl 과 "\n" 의 차이 

```c++
1. endl

cout<<"hello"<<endl;

cout<<"hello"<<"\n";
cout.flush();

// 두 행동을 순차적으로 시행한다. 

2. "\n" 

cout<<"hello"<<"\n";

// 바로 엔터 인식을 한다. 
```

> 그렇기 때문에 endl을 사용하는 것 보다 "\n"을 사용하는 것이 시간상 훨씬 빠르다. 



* cin / cout 입출력 속도 향상 시키기 

```c++
    ios_base::sync_with_stdio(0);
    cin.tie(0);
```

> 이 두 가지 명령어를 통해 입출력 속도를 월등히 향상시킬 수 있다. 항상 챙겨두고 
>
> cin /  cout을 사용할 수 있도록!!!

### 2. string과 char[ ] 

* `string`의 경우 클래스를 통해 동적할당을 하다보니 string 자료형의 들어간 문자열에 따라 크기가 결정된다. 
* char[ ]의 경우는 처음 크기를 정한만큼 메모리를 할당받는다. 

> 그렇기 때문에 데이터 크기를 신경써야 한다면 string 클래스를 만약 문자 하나하나에 접근해야 할 필요가 있다면 char[ ]을 사용해보자

### 3. getline의 두 가지 라이브러리

1. cin.getline() 

* cin.getline()의 경우 세 개의 인자를 받는다. 

* `cin.getline(char *Arr, arr.size, delim)` (cin.getline의 경우 반드시 char *의 자료형이 와야한다. )

```c++
char arr[50];
cin.getline(arr,50,'\n');
cout << arr << "\n"; 
```



2. getline()

* getline()의 경우 string을 인자로 받는다. 

* `getline(cin, string string)` (string 자료형을 가진 변수가 와야한다.)

* getline()을 사용하려면 `#include <string>`을 선언해주어야 한다. 

```c++
string inputString;
getline(cin, inputString);
cout << inputString << "\n";
```



### 4. 이차원 배열의 사용 

* 이차원 배열을 사용하는 방법을 살펴보자.

#### 개인적으로 생각했던 방식  

```c++
#include <iostream>

int main() {
    int N;
    cin >> N;
    
    int arr[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
        	cin >> arr[i][j];    
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout >> arr[i][j] >> " ";
        }
        cout >> "\n";
    }
    
    return 0;
}
```

> 기존에는 깊게 생각하지 않고 이렇게 사용을 해보려고 하였다. 하지만 문제가 발생하게 되었고 이차원 배열의 선언에 있어서 메모리 할당이 잘못되었다는 것을 발견했다. 

#### 수정된 방식

```c++
#include <iostream>

int main() {
    int N;
    cin >> N;
    
    int **circle = new int*[N];		// 먼저 **를 이용하여 1차원의 배열의 주소값을 지정한다. 
    for(int i = 0; i < N; i++){
        circle[i] = new int[N];		// 그런 후 2차원 배열에 해당하는 부분에 1차원 메모리 공간을 할당해준다. 
    }		
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
        	cin >> arr[i][j];    
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout >> arr[i][j] >> " ";
        }
        cout >> "\n";
    }
    
    return 0;
}
```

