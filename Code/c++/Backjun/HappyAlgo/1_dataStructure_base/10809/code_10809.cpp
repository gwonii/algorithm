//
// Created by hoho on 2019-08-17.
//

#include "code_10809.h"

#include <iostream>

using namespace std;

const int MAX_SIZE = 26;

string inputString_10809;
int outputNum_10809[MAX_SIZE] ;

void method_10809() {


    cin >> inputString_10809;

    fill_n(outputNum_10809, MAX_SIZE, -1 );

    for (int i = 0; i < inputString_10809.size(); i++) {
        int curContent = (int)inputString_10809[i] - 97;

        if (outputNum_10809[curContent] == -1 ) {
            outputNum_10809[curContent] = i ;
        }
    }

    for (int i = 0; i < MAX_SIZE ; i++) {
        cout << outputNum_10809[i] << " ";
    }
}