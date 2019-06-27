//
// Created by hoho on 2019-06-19.
//

#include "Code_1065.h"

#include <iostream>
#include <vector>


using namespace std;

void method_1065() {

    int total = 0;
    int input;

    cin >> input;  // 정수 N, 각각의 자리수를 배열에 집어넣어야 한다.

    vector<int> w(3, 0);  // 숫자 쪼개기를 어떻게 할 수 있을까?

    // N의 값이 125라고 가정하자,

    int temp;

    for (int i = 1; i <= input; i++) {

        if(i == 1000){
            break;
        }

        temp = i;
        for (int j = 0; j < 3; j++) {
            w[2 - j] = temp % 10;
            temp /= 10;
        }

//        printf("%d  %d  %d\n", w[0], w[1], w[2]);

        if (w[0] == 0) {
            total++;
        } else {
            if (w[1] - w[0] == w[2] - w[1]) {
                total++;
            }
        }
    }

    printf("%d", total);
}