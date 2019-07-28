//
// Created by hoho on 2019-07-28.
//

#include "code_1406.h"

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int cursor_1406;

void method_1406() {

    int N;
    char action;

    string str;
    list<char> inputString;


    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        inputString.push_back(str[i]);
    }

    cursor_1406 = str.size();

    cin >> N;

    for (int i = 0; i < N; i++) {

        auto it = inputString.begin();

        cin >> action;

        if (action == 'L') {

            if (cursor_1406 != 0)
                --cursor_1406;

        } else if (action == 'D') {

            if (cursor_1406 != inputString.size())
                ++cursor_1406;


        } else if (action == 'B') {

            if (cursor_1406 != 0) {

                for (int j = 0; j < cursor_1406 - 1; j++) {
                    it++;
                }

                inputString.erase(it);

                --cursor_1406;
            }

        } else if (action == 'P') {
            char insert;
            cin >> insert;

            for (int j = 0; j < cursor_1406; j++) {
                it++;
            }

            inputString.insert(it, insert);
            ++cursor_1406;
        }
    }

    for (char mm : inputString) {
        cout << mm;
    }
}
