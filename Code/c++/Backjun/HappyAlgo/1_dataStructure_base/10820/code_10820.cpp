//
// Created by hoho on 2019-08-17.
//

#include "code_10820.h"

#include <iostream>
#include <string>

using namespace std;

string inputString_10820;

void method_10820() {



    int count = 100;

    while (count--) {
        int upper = 0;
        int lower = 0;
        int number = 0;
        int space = 0;


        getline(cin, inputString_10820);

        if (inputString_10820.length() == 0) {
            break;
        }

        for (int i = 0; i < inputString_10820.size(); i++) {

            if (inputString_10820[i] >= 'A' && inputString_10820[i] <= 'Z') {
                upper++;
            } else if (inputString_10820[i] >= 'a' && inputString_10820[i] <= 'z') {
                lower++;
            } else if (inputString_10820[i] >= '0' && inputString_10820[i] <= '9') {
                number++;
            } else if (inputString_10820[i] == ' ') {
                space++;
            }
        }

        cout << lower << " " << upper << " " << number << " " << space << "\n";
    }
}