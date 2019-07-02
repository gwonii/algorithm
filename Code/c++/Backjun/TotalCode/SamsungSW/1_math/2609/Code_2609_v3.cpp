//
// Created by hoho on 2019-07-02.
//

#include <iostream>

using namespace std;

int L_2609_v3;
int R_2609_v3;

int gcd_2609_v3(int a, int b) {

    if (b == 0) {
        return a;
    } else {
        gcd_2609_v3(b, a % b);
    }
}

int lcm_2609_v3(int a, int b) {

    return (a * b) / gcd_2609_v3(a, b);
}

void method_2609_v3() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> L_2609_v3 >> R_2609_v3;

    gcd_2609_v3(L_2609_v3, R_2609_v3);

    cout << gcd_2609_v3(L_2609_v3, R_2609_v3) << "\n";
    cout << lcm_2609_v3(L_2609_v3, R_2609_v3) << "\n";

}