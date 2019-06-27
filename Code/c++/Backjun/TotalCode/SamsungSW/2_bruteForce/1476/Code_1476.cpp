//
// Created by hoho on 2019-06-27.
//

#include "Code_1476.h"
#include <iostream>
#include <vector>

#define MAX_E 16
#define MAX_S 29
#define MAX_M 20

using namespace std;


int calYears(int E, int S, int M){

    int year = 0;
    int e = 0;
    int s = 0;
    int m = 0;

    while(true) {
        if(e == MAX_E){
            e = 1;
        }
        if(s == MAX_S){
            s = 1;
        }
        if(m == MAX_M){
            m = 1;
        }
        if(E == e && S == s && M == m){
            break;
        }
        e++;
        s++;
        m++;
        year++;
    }
    return year;
}

void method_1476(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int E,S,M;
    cin >> E;
    cin >> S;
    cin >> M;

    int resutlYear = 0;

    resutlYear = calYears(E,S,M);

    cout << resutlYear << "\n";
}