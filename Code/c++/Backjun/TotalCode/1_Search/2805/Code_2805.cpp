//
// Created by hoho on 2019-06-24.
//

#include "Code_2805.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mysearch() {

}

void method_2805() {

    int N, M;
    int H = 0;
    vector<int> woods;

    cin >> N;   // 입력할 나무의 개수
    cin >> M;   // 필요한 나무의 길이

    woods.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> woods[i];
    }

    sort(woods.begin(), woods.end());

    int target = woods[N-1] / 2;
    int left = 0;
    int right = woods[N-1];
    while (target > 0) {

        int A = M;
        for (int j = N; j > 0; j--) {
            if (woods[j - 1] > target) {
                A -= woods[j - 1] - target;
            }
        }

        if (A > 0) {
            H = left;
            break;
        }
        left = target;
        target = (left + right) / 2;
    }


    printf("%d", H);

}