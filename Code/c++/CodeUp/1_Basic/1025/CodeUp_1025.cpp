//
// Created by hoho on 2019-06-28.
//

#include "CodeUp_1025.h"

#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

void method_1025() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int count = 0;
    int inputNumber;
    cin >> inputNumber;

    int temp = inputNumber;
    int temp2 = inputNumber;
    vector<int> inputNumber2;

    while (temp > 0) {
        temp = (int) (temp / 10);
        count++;
    }

    while(temp2 > 0){
        inputNumber2.push_back(temp2 % 10);
        temp2 /= 10;
    }

    sort(inputNumber2.begin(),inputNumber2.end());

    int tempCount2 = count;
    for(int i : inputNumber2){
        cout << i * pow(10,tempCount2 - 1) << "\n";
        tempCount2--;
    }

    int tempCount = count;
    for(int i = 0; i < count; i++){
        int tempNum = (int)(inputNumber / pow(10,tempCount - 1));
        cout << "[" <<tempNum * pow(10,tempCount - 1) <<"]"<< "\n";
        inputNumber -= tempNum * (int)(pow(10,tempCount - 1));
        tempCount--;
    }
}