//
// Created by hoho on 2019-07-03.
//

#include "Code_15651.h"

#include <iostream>
#include <vector>

using namespace std;

int N_15651, M_15651;
vector<int> targetVec_15651;

void reculsive_15651() {

    if(targetVec_15651.size() == M_15651){
        for(int i : targetVec_15651){

            cout << i << " ";
        }
        cout << "\n";
        return ;
    } else {
        for(int i = 0; i < N_15651; i++){
            targetVec_15651.push_back(i+1);
            reculsive_15651();
            targetVec_15651.pop_back();
        }
    }
}

void method_15651(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cin >> N_15651 >> M_15651;

    reculsive_15651();

}