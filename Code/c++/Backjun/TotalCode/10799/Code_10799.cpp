//
// Created by hoho on 2019-06-19.
//

#include "Code_10799.h"

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int pipe(string str) {
    stack<char> st;
    int result = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            st.push(str[i]);
        } else {
            st.pop();
            if (str[i - 1] == '(') {
                result += st.size();
            } else {
                result++;
            }
        }
    }
    return result;
}

int method_10799() {

    string str;
    cin >> str;
    printf("%d\n", pipe(str));

    return 0;

}