//
// Created by hoho on 2019-06-30.
//

#include "Code_10971.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void method_10971() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> circleIndex(N);

    for (int i = 0; i < N; i++) {
        circleIndex[i] = i;
    }

    int **circle = new int *[N];
    for (int i = 0; i < N; i++) {
        circle[i] = new int[N];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> circle[i][j];
        }
    }

    int min = 0;
    int temp;
    while (next_permutation(circleIndex.begin(), circleIndex.end())) {
        temp = 0;
        for (int i = 0; i < N; i++) {
            if (i == N - 1) {
                temp += circle[circleIndex[i]][circleIndex[i - (N - 1)]];
                break;
            }

            if (circle[circleIndex[i]][circleIndex[i + 1]] == 0) {
                temp = 0;
                break;
            }
            temp += circle[circleIndex[i]][circleIndex[i + 1]];
        }
        if (temp != 0) {
            if (min == 0) {
                min = temp;
            } else if (min > temp) {
                min = temp;
            }
        }
    }

    cout << min << "\n";

}