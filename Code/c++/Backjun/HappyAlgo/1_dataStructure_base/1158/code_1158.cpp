//
// Created by hoho on 2019-08-05.
//

#include "code_1158.h"

#include <iostream>
#include <queue>

using namespace std;

int N_1158;
int K_1158;
queue<int> dataQueue;

void method_1158() {


    cin >> N_1158 >> K_1158;

    for (int i = 0; i < N_1158; i++) {
        dataQueue.push(i + 1);
    }

    cout << '<';

    while(!dataQueue.empty()) {

        if (dataQueue.size() == 1) {
            cout << dataQueue.front() << '>';
            dataQueue.pop();
            break;
        }

        for (int i = 1; i < K_1158; i++) {
            dataQueue.push(dataQueue.front());
            dataQueue.pop();
        }
        cout << dataQueue.front() << ", ";
        dataQueue.pop();
    }
}

