//
// Created by hoho on 2019-06-23.
//

#include "Test.h"
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;


void testMethod() {

    int N, temp;

    cin >> N;


    vector<int> array;

    array.resize(N);
    for(int i = 0; i < N; i++){
        cin >> array[i];
    }

    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - 1 - i; j++){
            if(array[j] > array[j + 1]){
               temp = array[j];
               array[j] = array[j + 1];
               array[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < N; i++){
        cout << array[i];
    }

}
