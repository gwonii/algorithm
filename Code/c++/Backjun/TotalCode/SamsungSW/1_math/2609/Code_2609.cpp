//
// Created by hoho on 2019-06-25.
//

#include "Code_2609.h"

#include <iostream>

using namespace std;

int gcd(int N, int M){

    int gcdValue = 0;
    int maxSize = 0;

    if(N > M){
        maxSize = N;
    } else {
        maxSize = M;
    }

    for(int i = maxSize; i > 0; i-- ){

        if(((N % i) == 0) && ((M % i) == 0) ){
            gcdValue = i;
            break;
        }
    }

    return gcdValue;
}

int lcm(int N, int M){

    int lcmValue = 0;

    for(int i = 1; i <= N ; i++){
        for(int j = 1; j <= M ; j++){
            if(M * i == N * j ){
                lcmValue = M * i;
                break;
            }
        }

        if(M * i == lcmValue){
            break;
        }
    }
    return lcmValue;
}

void method_2609(){

    int firstInput;
    int secondInput;

    int gcdValue = 0;
    int lcmValue = 0;

    cin >> firstInput;
    cin >> secondInput;

    gcdValue = gcd(firstInput, secondInput);
    lcmValue = lcm(firstInput, secondInput);

    printf("%d \n", gcdValue);
    printf("%d \n", lcmValue);
}
