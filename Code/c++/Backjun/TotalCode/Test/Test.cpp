//
// Created by hoho on 2019-06-23.
//

#include "Test.h"
#include <iostream>

using namespace std;

int fac(int n) {
    if(n == 1){
        return 1;
    }
    return n * fac(n-1);
}


void testMethod() {

        cout << fac(3) << "\n";

}