//
// Created by hoho on 2019-07-02.
//

// 방법 2. 재귀

#include <iostream>

#define MAX 13

using namespace std;

int k_6603_v3;
int inputNum_6603_v3[MAX];
int resultNum_6603_v3[MAX];

void reculsive_6603_v3(int index, int count) {

    if (index == 6) {
        for (int i = 0; i < 6; i++) {
            cout << resultNum_6603_v3[i] << " ";
        }
        cout << "\n";
        return;
    } else if (k_6603_v3 - count < 6 - index) return;
    else {
        resultNum_6603_v3[index] = inputNum_6603_v3[count];

        reculsive_6603_v3(index + 1, count + 1);
        reculsive_6603_v3(index, count + 1);
    }

}

void method_6603_v3() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    while(true){

        cin >> k_6603_v3;

        if(k_6603_v3 == 0){
            break;
        }

        for (int i = 0; i < k_6603_v3; i++) {
            cin >> inputNum_6603_v3[i];
        }

        reculsive_6603_v3(0,0);
        cout << "\n";
    }


}