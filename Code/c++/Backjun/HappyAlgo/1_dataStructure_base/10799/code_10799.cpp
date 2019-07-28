//
// Created by hoho on 2019-07-28.
//

#include "code_10799.h"

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void method_10799() {

    int totalNum = 0;
    string inputString;
    cin >> inputString;

    stack<char> st;

    for(int i = 0; i < inputString.size(); i++){
        if(inputString[i] == '('){
            st.push(inputString[i]);
        } else {
            st.pop();
            if(inputString[i - 1] == '('){
                totalNum += st.size();
            } else {
                totalNum++;
            }
        }
    }

    cout << totalNum;
}