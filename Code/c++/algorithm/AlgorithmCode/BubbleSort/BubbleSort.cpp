//
// Created by hoho on 2019-06-24.
//


#include "BubbleSort.h"

#include <iostream>


using namespace std;

void bubbleSort() {

    int temp;
    int array[5] = {2, 3, 1, 4, 5};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int k : array) {
        printf("%d ", k);
    }
}
