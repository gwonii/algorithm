//
// Created by hoho on 2019-06-21.
//  소트인사이드
//

#include "Code_1427.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void method_1427(){

    int input;

    cin >> input;

    vector<int> numVector;

    while(input != 0){
        numVector.push_back(input % 10);
        input /= 10;
    }

    sort(numVector.begin(), numVector.end(), greater<int>());

    for(int i : numVector){
        printf("%d" , i );
    }
}