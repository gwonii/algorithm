//
// Created by hoho on 2019-07-05.
//


#include "Level1.h"

#include <iostream>
#include <vector>


using namespace std;

void method_1(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int N;
    int primeSum = 0;

    cin >> N;

    bool *primeNum = new bool[N + 1];


    for(int i = 2; i < N + 1; i++){
        primeNum[i] = true;
    }


    for(int i = 2; i < N + 1; i++){
        for(int j = 2 * i; j < N + 1; j +=i ){
            if(!primeNum[j]){
                continue;

            }
            primeNum[j] = false;
        }
    }


    cout << "{";
    for(int i = 2; i < N + 1; i++){
        if(i == 2){
            if(primeNum[i]){
                cout << i;
                primeSum += i;
            }
        }
        else {
            if(primeNum[i]){
                cout << "," << i;
                primeSum += i;
            }
        }
    }
    cout << "}=" << primeSum << "\n";

}