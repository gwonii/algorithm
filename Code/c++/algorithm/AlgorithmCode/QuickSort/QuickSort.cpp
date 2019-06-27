//
// Created by hoho on 2019-06-24.
//

#include "QuickSort.h"

#include <iostream>
#include <algorithm>

using namespace std;

int compare(const void *a, const void *b){

    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1 < num2){
        return -1;
    } else if(num1 > num2) {
        return 1;
    } else {
        return 0;
    }
}

void quickSortAlgo(int data[], int start, int end){

    if(start >= end){
        return;
    }

    int key = start;
    int i = start + 1;
    int j = end;
    int temp;

    while(i <= j) {
        while(i <= end && data[i] <= data[key]){
            i++;
        }
        while(j > start && data[j] >= data[key]){
            j--;
        }

        if(i > j){
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else{
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }

    quickSortAlgo(data,start, j-1);
    quickSortAlgo(data,j+1,end);

}

void quickSort() {

    int number = 10;
    int data[10] = {1,10,5,8,7,6,4,3,2,9};


    quickSortAlgo(data,0,number-1);

    for(int i : data){
        printf("%d\n", i);
    }
}
