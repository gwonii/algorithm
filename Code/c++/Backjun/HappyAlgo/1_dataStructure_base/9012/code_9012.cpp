//
// Created by hoho on 2019-07-28.
//

#include "code_9012.h"

#include <iostream>
#include <vector>
#include <stack>

#define MAX 51

using namespace std;

void method_9012() {

    int T;
    stack<char> st;

    cin >> T;

    for (int i = 0; i < T; i++) {
        string inputString;
        cin >> inputString;

        for (int i = 0; i < inputString.size(); i++) {
            if (inputString[i] == '(') {
                st.push(inputString[i]);
            }
            else {        // ')' 일 때
                if (!st.empty()) {
                    st.pop();
                } else {
                    cout << "NO" << "\n";
                    break;
                }
            }

            if(i == inputString.size() - 1){
                if(st.empty()){
                    cout << "YES" <<"\n";

                } else {
                    cout << "NO" << "\n";
                }
            }
        }

        while(!st.empty()){
            st.pop();
        }
    }
}