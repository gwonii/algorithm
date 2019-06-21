//
// Created by hoho on 2019-06-21.
//

#include "Code_3047.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void method_3047() {

    // A < B < C의 순서를 가짐

    int input;
    string inputString;
    vector<int> numVector(3);

    for (int i = 0; i < 3; i++) {
        cin >> numVector[i];
    }

    sort(numVector.begin(), numVector.end());


    cin >> inputString;

    for (char i : inputString) {
        printf("%d ", numVector[i - 'A']);
    }

}

//  배열 복사하기
//char* charArray = new char[inputString.size() + 1];
//strcpy_s(charArray,inputString.size() + 1, inputString.c_str());
