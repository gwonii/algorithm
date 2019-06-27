//
// Created by hoho on 2019-06-25.
//

#include "Code_1978.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int const MAX = 1001;

void method_1978() {

    bool isPrime[MAX];

    for(int i = 2; i < MAX; i++){
        isPrime[i] = true;
    }


    for(int i = 2; i < MAX; i++){
        for(int j = 2 * i; j < MAX; j += i){
            if(!isPrime[j])
                continue;
            isPrime[j] = false;
        }
    }


    int N;
    cin >> N;

    vector<int> inputValue(N,0);
    vector<int> primeNum;
    for(int i = 0; i < N; i++){
        cin >> inputValue[i];

        if(isPrime[inputValue[i]]){
            primeNum.push_back(inputValue[i]);
        }
    }

    printf("%d", primeNum.size());
}

