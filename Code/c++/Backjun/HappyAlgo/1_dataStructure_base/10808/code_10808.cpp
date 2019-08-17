//
// Created by hoho on 2019-08-17.
//

#include "code_10808.h"


#include <iostream>

using namespace std;

const int MAX_SIZE = 25;

string inputString_10808;
int outputNum_10808[MAX_SIZE] = {0, };

void method_10808() {


    cin >> inputString_10808;



    for (int i = 0; i < inputString_10808.size(); i++) {
        int curContent = (int)inputString_10808[i] - 97;

        outputNum_10808[curContent]++;
    }

    for (int i = 0; i < MAX_SIZE + 1; i++) {
        cout << outputNum_10808[i] << " ";
    }
}