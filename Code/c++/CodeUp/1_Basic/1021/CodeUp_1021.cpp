//
// Created by hoho on 2019-06-28.
//

#include "CodeUp_1021.h"

#include <iostream>

using namespace std;

void method_1021() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string inputString;
    char inputString2[51];

    cin >> inputString;
    cin >> inputString2;

    cout << inputString << "\n";
    cout << inputString2 << "\n";

    cout << inputString.size() << "\n";
    cout << sizeof(inputString2) << "\n";
}