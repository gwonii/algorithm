//
// Created by hoho on 2019-06-29.
//

#include "Code_10819.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cal(int N, vector<int> numbers) {

    int sum = 0;
    for (int i = 0; i < N - 1; i++) {
        if((numbers[i] - numbers[i + 1]) > 0) {
            sum += numbers[i] - numbers[i + 1];
        } else {
            sum -= numbers[i] - numbers[i + 1];
        }
    }
    return sum;
}

void method_10819() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;  // 배열 속 개수
    cin >> N;

    vector<int> numbers(N);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());


    int temp = 0;
    int maxSum = 0;
    while (next_permutation(numbers.begin(), numbers.end())) {
        temp = cal(N, numbers);
        if (maxSum < temp) {
            maxSum = temp;
        }
    }

    cout << maxSum << "\n";
}