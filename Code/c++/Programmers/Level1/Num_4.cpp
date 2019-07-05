//
// Created by hoho on 2019-07-05.
//


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// command를 하나씩 받으면서 i,j,k 에 따라 return 값을 구하는 함수
int func(vector<int> array,vector<int> command) {

    int temp[101];
    for(int i = 0; i < command[1] - command[0] + 1; i++){
        temp[i] = array[command[0] - 1 + i];
    }
    sort(temp, temp + (command[1] - command[0] + 1));

    return temp[command[2] - 1];
}

void method_4() {


    vector<int> array = {1,5,2,6,3,7,4};
    vector<vector<int>> commands;

    vector<int> case_1 = {2,5,3};
    vector<int> case_2 = {4,4,1};
    vector<int> case_3 = {1,7,3};

    commands.push_back(case_1);
    commands.push_back(case_2);
    commands.push_back(case_3);

    for(int i = 0 ; i < 3; i++){
        cout << func(array, commands[i]) << " ,";
    }

}


