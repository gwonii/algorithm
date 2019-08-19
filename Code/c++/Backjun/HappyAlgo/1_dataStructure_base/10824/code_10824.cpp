//
// Created by hoho on 2019-08-19.
//

#include "code_10824.h"

#include <iostream>
#include <string>

using namespace std;


void method_10824() {

    int A,B,C,D;

    cin >> A >> B >> C >> D;

    string leftStringValue;
    string rightStringValue;

    leftStringValue = to_string(A) + to_string(B);
    rightStringValue = to_string(C) + to_string(D);

    long long leftIntValue;
    long long rightIntValue;



    leftIntValue = stoll(leftStringValue);
    rightIntValue = stoll(rightStringValue);

    long long sum;

    sum = leftIntValue + rightIntValue;

    cout << sum;

}