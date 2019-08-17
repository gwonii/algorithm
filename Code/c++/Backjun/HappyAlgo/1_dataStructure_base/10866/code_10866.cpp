//
// Created by hoho on 2019-08-05.
//

#include "code_10866.h"

#include <iostream>
#include <deque>

using namespace std;

int N_10866;
deque<int> dataDeque;

void method_10866() {

    cin >> N_10866;

    while(N_10866--) {

        string inputString;
        cin >> inputString;

        if (inputString == "push_front") {
            int inputX;
            cin >> inputX;
            dataDeque.push_front(inputX);
        } else if (inputString == "push_back") {
            int inputX;
            cin >> inputX;
            dataDeque.push_back(inputX);
        } else if (inputString == "pop_front") {
            if (!dataDeque.empty()) {
                cout << dataDeque.front() << "\n";
                dataDeque.pop_front();
            } else {
                cout << -1 << "\n";
            }

        } else if (inputString == "pop_back") {
            if(!dataDeque.empty()) {
                cout << dataDeque.back() << "\n";
                dataDeque.pop_back();
            } else {
                cout << -1 << "\n";
            }
        } else if (inputString == "size") {
            cout << dataDeque.size() << "\n";
        } else if (inputString == "empty") {
            if (dataDeque.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (inputString == "front") {
            if (!dataDeque.empty()) {
                cout << dataDeque.front() << "\n";
            } else {
                cout << -1 << "\n";
            }
        } else if (inputString == "back") {
            if (!dataDeque.empty()) {
                cout << dataDeque.back() << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
}