//
// Created by hoho on 2019-06-28.
//

#include "CodeUp_1022.h"

#include <iostream>
#include <string>

using namespace std;

void method_1022(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string inputString;
    char inputString2[2001];

    getline(cin,inputString);
    cin.getline(inputString2,2000,'\n');

    cout << inputString << "\n";
    cout << inputString2 << "\n";

}