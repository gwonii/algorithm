//
// Created by hoho on 2019-06-27.
//

#include "Code_2309.h"

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int const MAX = 9;

int getSum(vector<int> arr) {

    int sum = 0;

    for (int i = 0; i < MAX; i++) {
        sum += arr[i];
    }

    return sum;
}

void method_2309() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int sumDwarf = 0;

    vector<int> dwarfLength(MAX);

    for (int i = 0; i < MAX; i++) {
        cin >> dwarfLength[i];
    }

    sumDwarf = getSum(dwarfLength);

    for (int i = 0; i < MAX - 1; i++) {
        for (int j = i + 1; j < MAX; j++) {
            if (sumDwarf - (dwarfLength[i] + dwarfLength[j]) == 100) {
                dwarfLength[i] = 0;
                dwarfLength[j] = 0;
                break;
            }
        }
        if (dwarfLength[i] == 0)
            break;
    }

    sort(dwarfLength.begin(), dwarfLength.end());
    for (int i = 2; i < MAX; i++) {
        cout << dwarfLength[i] << "\n";
    }
}
