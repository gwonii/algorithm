//
// Created by hoho on 2019-06-30.
//

#include "Code_6603.h"

#include <iostream>

#define MAX_SIZE 13

using namespace std;

int N;
int lottoNum[MAX_SIZE];
int outNum[MAX_SIZE];


void lotto(int current, int count) {

    if(count == 6 ){
        for(int i = 0; i < 6; i++ ){
            cout << outNum[i] << " ";
        }
        cout << "\n";
        return;
    } else {
        for(int i = current; i < N; i++ ){
            outNum[count] = lottoNum[i];
            lotto(i+1,count + 1);
        }
    }
}

void method_6603() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true){
        cin >> N;

        if(N == 0){
            return ;
        }

        for(int i = 0; i < N; i++){
            cin >> lottoNum[i];
        }

        lotto(0,0);

        cout << "\n";
    }
}