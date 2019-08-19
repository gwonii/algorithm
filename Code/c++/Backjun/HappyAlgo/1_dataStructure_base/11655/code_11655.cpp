//
// Created by hoho on 2019-08-19.
//

#include "code_11655.h"


#include <iostream>
#include <stack>
#include <string>

using namespace std;

string inputString_11655;


char lowerChanger(char content) {

    int tempContent = (int) content;

    for (int i = 0; i < 13; i++) {

        if (tempContent == 122) {
            tempContent = 97;
        } else {
            tempContent++;
        }
    }

    return (char) tempContent;
}

char upperChanger(char content) {

    int tempContent = (int) content;

    for (int i = 0; i < 13; i++) {

        if (tempContent == 90) {
            tempContent = 65;
        } else {
            tempContent++;
        }
    }
    return (char) tempContent;
}

void method_11655() {


    getline(cin, inputString_11655);

    for (char & i : inputString_11655) {

        if(i >= 'A' && i <= 'Z') {
            i = upperChanger(i);
        } else if (i >= 'a' && i <= 'z') {
            i = lowerChanger(i);
        }
    }


    for (char i : inputString_11655) {
        cout << i;
    }


}