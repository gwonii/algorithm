//
// Created by hoho on 2019-08-19.
//

#include "code_11656.h"


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


void method_11656() {

    string inputString;
    vector<string> stringData;

    getline(cin, inputString);

    int count = inputString.size();

    for (int i = 0; i < count; i++) {

        if (i == 0) {
            stringData.push_back(inputString);
            sort(stringData.begin(), stringData.end());
        } else {
            inputString.erase(inputString.begin());
            stringData.push_back(inputString);
            sort(stringData.begin(), stringData.end());
        }
    }

//    while (next_permutation(stringData.begin(), stringData.end())) {}


    for (int i = 0; i < stringData.size(); i++) {
        cout << stringData[i] << "\n";
    }
}