# string 활용 



## 1. string 각각의 배열에 접근하기. 

**문자열의 접근 중 향상된 루프문으로 인한 문제**

**11655_ROT13**

```c++

string inputString_11655;

getline(cin, inputString_11655);

for (int i = 0; i < inputString_11655.size(); i++) {

        if(inputString_11655[i] >= 'A' && inputString_11655[i] <= 'Z') {
            inputString_11655[i] = upperChanger(inputString_11655[i]);
        } else if (inputString_11655[i] >= 'a' && inputString_11655[i] <= 'z') {
            inputString_11655[i] = lowerChanger(inputString_11655[i]);
        }
}
```

> 위 처럼 `inputString`을 `getline()`을 통해 문자열을 입력받은 후에 string 문자열에 각각의 인덱스의 값을 바꾸려고 하고 있다. 
>
> 그런 이것을 향상된 반복문을 통해 표현하려고 하는 와중에 문제가 생겼다. 

<br/>



**향상된 반복문으로 수정**

```c++
 for (char content : inputString_11655) {

        if (content >= 'A' && content <= 'Z') {
            cout << content << "\n";
            content = upperChanger(content);
            cout << content << "\n";
        } else if (content >= 'a' && content <= 'z') {
            content = lowerChanger(content);
        }

 }
```

> 위와 같이 향상된 반복문으로 코드를 변경하였는데 제대로 문자열의 인덱스 접근을 통한 스위칭이 제대로 작동하지 않았다. 

<br/>

**(수정) 향상된 반복문**

```c++ 
for (char & i : inputString_11655) {

        if(i >= 'A' && i <= 'Z') {
            i = upperChanger(i);
        } else if (i >= 'a' && i <= 'z') {
            i = lowerChanger(i);
        }
    }
```

> 원래의 향상된 반복문에서는 각각의 문자열에 값으로 접근을 했다. 하지만 그렇게 하면 해당 루프에서만 값이 변경될 뿐 루프문을 빠져나가면 값은 그대로 유지되는 것이다. 
>
> 그렇기 때문에 `char & i : inputString_11655)` 처럼 주소값에 접근을 해야 한다. 

만약 하나의 메소드에서 `inputString_11655`변수를 건드렸다면 크게 문제되지 않았을 것이다. 하지만 나는 `inputString_11655` 변수를 **전역 변수로** 설정하였다. 그렇기 때문에 위와 같은 문제가 생긴것이다. **지역 변수**로 선언하였다면, 에러가 생기지 않을 것이다. 