//
// Created by hoho on 2019-06-28.
//

#include "Code_10972.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void method_10972(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> value(n);

    for(int i = 0; i < n; i++){
        value[i] = i+1;
    }

    do{
        for(int i = 0; i < n; i++){
            cout << value[i] << " ";
        }
        cout << "\n";
    } while(next_permutation(value.begin(),value.end()));


}