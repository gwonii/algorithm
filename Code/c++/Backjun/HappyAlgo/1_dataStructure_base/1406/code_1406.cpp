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

    list<char>::iterator iter = inputString.end();  // 현재의 iterator 위치라고 생각하면 됨
    iter--;
    list<char>::iterator lastNode = iter;           // 입력해야 할 맨 끝 자리 왼쪽 lastIter로 지정
    iter++;

    cin >> N;

    while (N--) {

        cin >> action;

        switch (action) {

            case 'L' :
                if (iter != inputString.begin())
                    iter--;
                break;
            case 'D' :
                if (iter != inputString.end())
                    iter++;
                break;

            case 'B' :
                if (iter != inputString.begin()){
                    if (iter == inputString.end()) {
                        inputString.erase(lastNode);
                        auto tempIter = inputString.end();
                        lastNode = --tempIter;
                    } else {
                        auto remove = --iter;
                        iter++;
                        inputString.erase(remove);          // remove하기 전에 iter을 ++ 해줘야 되는데 왜 그럴까?
                    }
                }
                break;

            case 'P' :
                char input;
                cin >> input;

                if(iter == inputString.end()){
                    inputString.push_back(input);
                    auto tmpIter = inputString.end();
                    lastNode = --tmpIter;
                } else {
                    inputString.insert(iter, input);
                }



                break;

        }
    }

    for (char i : inputString) {
        cout << i;
    }


    vector<int> intVec;

}

//cursor_1406 = str.size();
//
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//
//        auto it = inputString.begin();
//
//        cin >> action;
//
//        if (action == 'L') {
//
//            if (cursor_1406 != 0)
//                --cursor_1406;
//
//        } else if (action == 'D') {
//
//            if (cursor_1406 != inputString.size())
//                ++cursor_1406;
//
//
//        } else if (action == 'B') {
//
//            if (cursor_1406 != 0) {
//
//                for (int j = 0; j < cursor_1406 - 1; j++) {
//                    it++;
//                }
//
//                inputString.erase(it);
//
//                --cursor_1406;
//            }
//
//        } else if (action == 'P') {
//            char insert;
//            cin >> insert;
//
//            for (int j = 0; j < cursor_1406; j++) {
//                it++;
//            }
//
//            inputString.insert(it, insert);
//            ++cursor_1406;
//        }
//    }
//
//    for (char mm : inputString) {
//        cout << mm;
//    }
