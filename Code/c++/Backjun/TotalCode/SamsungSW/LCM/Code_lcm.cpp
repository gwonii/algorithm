//
// Created by hoho on 2019-06-25.
//

#include "Code_lcm.h"
#include "../GCD/Code_gcd.h"

#include <iostream>

using namespace std;

int exampleLcm(int N, int M){

    return (N * M) / exampleGcd(N,M);
}


void method_LCM(){

    int N,M;

    cin >> N;
    cin >> M;

    int value = exampleLcm(N,M);

    printf("%d ", value);
}