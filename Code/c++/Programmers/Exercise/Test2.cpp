//
// Created by hoho on 2019-07-06.
//


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MAX 14

using namespace std;

vector<int> dd (vector<int> ff) {


    return ff;
}

void method_test2() {

    vector<int> arr1 = {1,2,2,2,2,2,5};
    vector<int> arr2 = {4,4,4,4,5,6,7};

    vector<int> arr1Checker(14,0);
    for(int i = 0; i < arr1.size(); i++){
        arr1Checker[arr1[i]]++;
    }

    vector<int> arr2Checker(14,0);
    for(int i = 0; i < arr1.size(); i++){
        arr2Checker[arr1[i]]++;
    }

    int arrOneMax = 0;
    int arrTwoMax = 0;

    for(int i = 0; i < 14; i++){
        if(arr1Checker[i] > arrOneMax){
            arrOneMax = arr1[i];
        }
        if(arr2Checker[i] > arrTwoMax){
            arrTwoMax = arr2[i];
        }
    }

    cout << arrOneMax << "\n";
    cout << arrTwoMax << "\n";

    if(arrOneMax < 5 && arrTwoMax < 5){
        if(arrOneMax > arrTwoMax){
            cout << 1<< "\n";

        } else if(arrOneMax < arrTwoMax){
            cout << 2 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    vector<int> ef = { 3,4};
    vector<int> ff = {5,4};
    ef = dd(ff);

    for(int i = 0; i < 2; i++){
        cout <<ef[i] << " ";
    }

    for(int i = 0; i < 2; i++){
        cout <<ff[i] << " ";
    }

    cout << "\n";

    int max = 0;
    vector<int> arrr= {1,2,3,4,5,6,7};
    for(int i = 0; i <arrr.size(); i++){
        if(arrr[i] > max){
            max = arrr[i];
        }
    }
    cout << max << "\n";

    for(int i = 0; i < 3; i++){
        break;
    }

}