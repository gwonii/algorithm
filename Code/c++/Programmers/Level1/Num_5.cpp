//
// Created by hoho on 2019-07-05.
//

#include <iostream>

using namespace std;

void method_5(){

    int n;

    cin >> n;

    bool *checker = new bool[n + 1];

    for(int i = 2; i < n+1; i++){
        checker[i] = true;
    }
    checker[0]

    for(int i = 2; i < n + 1; i++){
        for(int j = 2 * i; j < n + 1; j +=i){
            if(!checker[j]){
                continue;
            }
            checker[j] = false;
        }
    }

    int primeCount = 0;
    for(int i = 0; i < n+1; i++){
        if(checker[i]){
            cout << i << " ";
            primeCount++;
        }
    }



    cout << primeCount << "\n";
}
