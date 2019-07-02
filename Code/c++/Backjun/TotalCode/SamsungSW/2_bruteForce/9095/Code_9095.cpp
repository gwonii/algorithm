//
// Created by hoho on 2019-06-28.
//

#include "Code_9095.h"

#include <iostream>
#include <vector>

using namespace std;


void method_9095(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    int arr[11];

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    int value;

    for(int i = 0; i < n; i++){
        cin >> value;
        for(int j = 4; j < value + 1; j++){
            arr[j] = arr[j-1] + arr[j-2] + arr[j-3];
        }
        cout << arr[value] << "\n";
    }
}

