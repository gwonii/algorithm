//
// Created by hoho on 2019-06-25.
//

#include "Code_9613.h"

#include <iostream>
#include <vector>

using namespace std;

long long GCD_9613(int a, int b){
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void method_9613(){

    int N;
    cin >> N;

    vector<long long> gcdValue(N,0);

    for(int i = 0; i < N; i++){
        long T;
        cin >> T;

        vector<int> number(T,0);   // T개

        for(int j = 0 ; j < T; j++){
            cin >> number[j];
        }

        for(int j = 0; j < T; j++){
            for(int k = j+1; k < T; k++){
                    gcdValue[i] += GCD_9613(number[j],number[k]);
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("%lld\n", gcdValue[i]);
    }
}