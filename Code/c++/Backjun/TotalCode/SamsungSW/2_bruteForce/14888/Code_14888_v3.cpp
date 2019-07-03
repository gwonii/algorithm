//
// Created by hoho on 2019-07-02.
//

// 방법론 1. 순열
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void method_14888_v3() {

    int max = -1000000001;
    int min = 1000000001;

    int N;
    int inputNum[12];
    int inputOperNum[4];
    vector<int> inputOper;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> inputNum[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> inputOperNum[i];
    }

    for (int i = 0; i < 4; i++) {
        while (inputOperNum[i] > 0) {
            inputOper.push_back(i);
            inputOperNum[i]--;
        }
    }

    sort(inputNum, inputNum + N);

    int total;
    do {
        total = 0;
        for (int i = 0; i < N; i++) {
            if (i == 0){
                total += inputNum[i];
                continue;
            }

            if (inputOper[i - 1] == 0) {
                total += inputNum[i];
            } else if (inputOper[i - 1] == 1) {
                total -= inputNum[i];
            } else if (inputOper[i - 1] == 2) {
                total *= inputNum[i];
            } else if (inputOper[i - 1] == 3) {
                total /= inputNum[i];
            }
        }

        if(total < min){
            min = total;
        }
        if(total > max){
            max = total;
        }

    } while (next_permutation(inputOper.begin(), inputOper.end()));

    cout << max << "\n" << min << "\n";

}