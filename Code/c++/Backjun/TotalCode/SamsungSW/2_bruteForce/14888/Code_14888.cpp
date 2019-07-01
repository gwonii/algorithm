//
// Created by hoho on 2019-06-30.
//

#include "Code_14888.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int maxN = -1000000000;
int minN = 1000000000;
int p, s, m, d;
int inputNum[12];

void dfs(int index, int plus, int sub, int multi, int div, int total) {

    if (index == n) {
        maxN = max(maxN, total);
        minN = min(minN, total);
        return;
    }
    if (plus < p) {
        dfs(index + 1, plus + 1, sub, multi, div, total + inputNum[index]);
    }
    if (sub < s) {
        dfs(index + 1, plus, sub + 1, multi, div, total - inputNum[index]);
    }
    if (multi < m) {
        dfs(index + 1, plus, sub, multi + 1, div, total * inputNum[index]);
    }
    if (div < d) {
        dfs(index + 1, plus, sub, multi, div + 1, total / inputNum[index]);
    }

}

void method_14888v2() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> inputNum[i];
    }

    cin >> p >> s >> m >> d;


    dfs(1, 0, 0, 0, 0, inputNum[0]);

    cout << maxN << "\n";
    cout << minN << "\n";
}

// version_1


void method_14888() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> inputNum(N);
    vector<int> inputOperator(N - 1, 0);
    vector<int> inputOperatorNum(4, 0);


    for (int i = 0; i < N; i++) {
        cin >> inputNum[i];
    }

    for (int i = 0; i < 4; i++) {
        cin >> inputOperatorNum[i];
    }

    //-------

    for (int i = 0; i < N; i++) {
        cout << inputNum[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < 4; i++) {
        cout << inputOperatorNum[i] << " ";
    }
    cout << "\n";


    //----
    // 0은 '+',  1은 '-',  2는 '*',  3은 '/'
    int operatorNum = 0;
    for (int i = 0; i < 4; i++) {
        while (inputOperatorNum[i] > 0) {
            if (i == 0) {
                inputOperator[operatorNum] = 0;
                operatorNum++;
            } else if (i == 1) {
                inputOperator[operatorNum] = 1;
                operatorNum++;
            } else if (i == 2) {
                inputOperator[operatorNum] = 2;
                operatorNum++;
            } else if (i == 3) {
                inputOperator[operatorNum] = 3;
                operatorNum++;
            }
            inputOperatorNum[i]--;
        }
    }

    for (char i : inputOperator) {
        cout << i << ", ";
    }
    cout << "\n\n";

    int maxSum = 0;
    int minSum = 0;
    int temp;
    while (next_permutation(inputNum.begin(), inputNum.end())) {
        while (next_permutation(inputOperator.begin(), inputOperator.end())) {

            for (int i = 0; i < N; i++) {
                cout << inputNum[i] << ", ";
            }
            cout << "\n";

            for (int i = 0; i < N - 1; i++) {
                cout << inputOperator[i] << ", ";
            }
            cout << "\n";

            temp = 0;
            for (int i = 0; i < N; i++) {
                if (i == 0) {
                    temp = inputNum[i];
                    continue;
                }

                if (inputOperator[i - 1] == 0) {
                    temp += inputNum[i];
                } else if (inputOperator[i - 1] == 1) {
                    temp -= inputNum[i];
                } else if (inputOperator[i - 1] == 2) {
                    temp *= inputNum[i];
                } else if (inputOperator[i - 1] == 3) {
                    if (temp < 0) {
                        temp = -(-temp / inputNum[i]);
                    } else {
                        temp /= inputNum[i];
                    }
                }
            }

            if (minSum == 0) {
                minSum = temp;
            } else if (minSum > temp) {
                minSum = temp;
            }

            if (maxSum == 0) {
                maxSum = temp;
            } else if (maxSum < temp) {
                maxSum = temp;
            }
        }
    }

    cout << maxSum << "\n";
    cout << minSum << "\n";
}