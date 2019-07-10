//
// Created by hoho on 2019-07-05.
//

#include <iostream>

using namespace std;

void method_7(){

    string s = "1234567890";
    bool answer = true;

    for(int i = 0; i < s.size(); i++){
        cout << (int)s[i] << " ";
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] > 57 || s[i] < 48){
            answer = false;
            break;
        } else {
            answer = true;
        }
    }

    cout << answer << "\n";

    bool are = isdigit(s[3]);

    cout << are << "\n";
}