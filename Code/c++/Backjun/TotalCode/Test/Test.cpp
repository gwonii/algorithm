//
// Created by hoho on 2019-06-23.
//

#include "Test.h"
#include <iostream>

using namespace std;


void multiTable(int n) {
    if (n == 10) {
        cout << "end" << "\n";
        return;
    }
    cout << "2 * " << n << " = " << 2 * n << "\n";
    multiTable(n + 1);
}


void testMethod() {

    multiTable(1);
}