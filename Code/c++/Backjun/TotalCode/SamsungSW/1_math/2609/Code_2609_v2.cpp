//
// Created by hoho on 2019-07-02.
//

#include <iostream>

using namespace std;

int L_2609_v2;
int R_2609_v2;

int gcd_2609_v2(int a, int b){

    int temp;
    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }       // a > b 상태 만들기

    int n;
    while(b != 0){
        n = a % b;
        a = b;
        b = n;
    }

    return a;
}

int lcm_2609_v2(int a, int b){

    return ( a * b) / gcd_2609_v2(a,b);
}

void method_2609_v2(){

    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    cin >> L_2609_v2 >> R_2609_v2;

    cout << gcd_2609_v2(L_2609_v2,R_2609_v2) << "\n";
    cout << lcm_2609_v2(L_2609_v2,R_2609_v2) << "\n";
}