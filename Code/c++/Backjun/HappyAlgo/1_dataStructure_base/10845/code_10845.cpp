//
// Created by hoho on 2019-08-05.
//

#include "code_10845.h"

#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;

void method_10845() {

    int N;
    cin >> N;

    queue<int> queueData;

    for (int i = 0; i < N; i++) {

        string inputString;
        cin >> inputString;

        if (inputString == "push") {
            int num;
            cin >> num;
            queueData.push(num);
        } else if (inputString == "pop") {
            if (!queueData.empty()){
                cout << queueData.front();
                cout << "\n";
                queueData.pop();
            } else
                cout << -1 << "\n";
        } else if (inputString == "size") {
            cout << queueData.size() << "\n";

        } else if (inputString == "empty") {
            if (queueData.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";

        } else if (inputString == "front") {
            if (!queueData.empty())
                cout << queueData.front() << "\n";
            else
                cout << -1 << "\n";
        } else if (inputString == "back") {
            if (!queueData.empty())
                cout << queueData.back() << "\n";
            else
                cout << -1 << "\n";
        }
    }
}