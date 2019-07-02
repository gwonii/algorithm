//
// Created by hoho on 2019-07-02.
//


// 방법론 1. 순열

#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 13

using namespace std;


int k_6603_v2;
int inputNum_6603_v2[MAX];
bool compareChk_6603_v2[MAX];

vector<int> resultNum_6603_v2;

void method_6603_v2() {

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    while(true){

        cin >> k_6603_v2;

        if(k_6603_v2 == 0){
            return;
        }

        for (int i = 0; i < k_6603_v2; i++){
            cin >> inputNum_6603_v2[i];
        }

        sort(inputNum_6603_v2, inputNum_6603_v2 + k_6603_v2);

        for (int i = 0; i < k_6603_v2; i++){
            if(i < 6){
                compareChk_6603_v2[i] = true;
            } else {
                compareChk_6603_v2[i] = false;
            }
        }


        do{
            for(int i= 0; i < k_6603_v2; i++){
                if(compareChk_6603_v2[i]){
                    resultNum_6603_v2.push_back(inputNum_6603_v2[i]);

                }
            }
            for(int i : resultNum_6603_v2){
                cout << i << " ";
            }
            cout << "\n";
            resultNum_6603_v2.clear();

        } while(prev_permutation(compareChk_6603_v2, compareChk_6603_v2 + k_6603_v2));

        cout << "\n";
    }

}