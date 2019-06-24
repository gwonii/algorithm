//
// Created by hoho on 2019-06-23.
//

#include "Code_10815.h"

#include <stdio.h>
#include <vector>
#include<cstring>
#include <algorithm>
#include <iostream>

using namespace std;

void method_10815() {

    vector<int> sangeun_card;
    vector<int> number_card;
    vector<int> boolean_value;

    int N,M;
    cin >> N;

    sangeun_card.resize(N);
    for(int i=0;i<N;i++){
        cin >> sangeun_card[i];
    }

    cin >> M;
    number_card.resize(M);
    for(int i=0;i<M;i++)
    {
        cin >> number_card[i];
    }

    boolean_value.resize(M);

    sort(sangeun_card.begin(), sangeun_card.end());

    for(int i = 0; i < M; i++){

        printf("%d ",binary_search(sangeun_card.begin(),sangeun_card.end(), number_card[i]));

    }
}


