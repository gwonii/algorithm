//
// Created by hoho on 2019-06-25.
//

#include "Code_gcd.h"

#include <iostream>

using namespace std;

int exampleGcd(int N, int M){
    while(M!= 0){
        int r = N % M;
        N = M;
        M = r;
    }

    return N;
}

void method_GCD() {

    int N,M;

    cin >> N;
    cin >> M;

    int value = exampleGcd(N,M);

    printf("%d " , value);
}