//
// Created by hoho on 2019-06-23.
//

#include "Test.h"
#include <iostream>
#include <algorithm>

using namespace std;



void testMethod() {


    int arr[3] = {1,4,2};
    int arr2[4] = {1,4,2,3};

    sort(arr, arr + 2);
    sort(arr2, arr2 + 4);

    for(int i : arr){
        cout << i << " ";
    }

    cout << "\n";

    for(int i : arr2){
        cout << i << " ";
    }
}