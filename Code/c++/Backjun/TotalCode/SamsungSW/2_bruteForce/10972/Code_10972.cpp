//
// Created by hoho on 2019-06-28.
//

#include "Code_10972.h"

#include <iostream>
#include <algorithm>

using namespace std;

int N_10972;
int inputNum_10972[10001];

void method_10972(){

    ios_base::sync_with_stdio(false) , cin.tie(0), cout.tie(0);

    cin >> N_10972;


    for(int i = 0; i < N_10972; i++){
        cin >> inputNum_10972[i];
    }

    if(next_permutation(inputNum_10972, inputNum_10972 + N_10972)){
        for(int i = 0; i < N_10972; i++){
            cout << inputNum_10972[i] << " ";
        }
    } else {
        cout << -1 << "\n";
    }
}