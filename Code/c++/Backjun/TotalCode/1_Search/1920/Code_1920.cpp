//
// Created by hoho on 2019-06-23.
//

#include "Code_1920.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void method_1920(){

    int M, N;
    vector<int> myNumber;
    vector<int> compareNumber;

    cin >> M;
    myNumber.resize(M);
    for(int i = 0; i < M; i++){
        cin >> myNumber[i];
    }

    cin >> N;
    compareNumber.resize(N);
    for(int i = 0; i < N; i++){
        cin >> compareNumber[i];
    }

    sort(myNumber.begin(),myNumber.end());

    for(int i = 0; i < N; i++){
        printf("%d\n", binary_search(myNumber.begin(),myNumber.end(),compareNumber[i]));
    }
}
