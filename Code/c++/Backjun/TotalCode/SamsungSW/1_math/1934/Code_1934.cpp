//
// Created by hoho on 2019-06-25.
//

#include "Code_1934.h"
#include "../../SamsungSW.h"

#include <iostream>
#include <vector>

using namespace std;

int GCD_1934(int a, int b){
    while(b!= 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int LCM_1934(int a, int b){
    return (a * b) / GCD_1934(a,b);
}

void method_1934(){

    int N;
    cin >> N;

    int a, b;
    vector<int> value(3,0);

    for(int i = 0; i < N; i++){
        cin >> a;
        cin >> b;

        value[i] = LCM_1934(a,b);
    }

    for(int i = 0; i < N; i++){
        printf("%d\n", value[i]);
    }
}

