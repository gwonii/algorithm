//
// Created by hoho on 2019-07-15.
//

#include "Code_2667.h"

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 26

using namespace std;

int N_2667;
int sqr_2667[MAX][MAX];
bool visit_2667[MAX][MAX] = {{false,}};
int totalCount_2667 = 1;

int dir_2667[4][2] = {{-1, 0},
                      {0,  1},
                      {1,  0},
                      {0,  -1}};

bool check_2667(int x, int y) {

    return (x >= 0 && x < N_2667) && (y >= 0 && y < N_2667);
}

void reculsive_2667(int x, int y, int count) {

    sqr_2667[x][y] = count;
    visit_2667[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int dx = x + dir_2667[i][0];
        int dy = y + dir_2667[i][1];
        if (check_2667(dx, dy) && sqr_2667[dx][dy] == 1) {
            reculsive_2667(dx, dy, count);
        }
    }
}


void method_2667() {

    cin >> N_2667;

    for (int i = 0; i < N_2667; i++) {
        for (int j = 0; j < N_2667; j++) {
            scanf("%1d", &sqr_2667[i][j]);
        }
    }


    for (int i = 0; i < N_2667; i++) {
        for (int j = 0; j < N_2667; j++) {
            if (!visit_2667[i][j]) {
                if (sqr_2667[i][j] == 1) {
                    totalCount_2667++;
                    reculsive_2667(i, j, totalCount_2667);
                }
            }
        }
    }

    int *result_2667 = new int[totalCount_2667 - 1];
    for (int i = 0; i < totalCount_2667 - 1; i++) {
        result_2667[i] = 0;
    }

    for (int i = 0; i < N_2667; i++) {
        for (int j = 0; j < N_2667; j++) {
            if (totalCount_2667 > 1) {
                result_2667[sqr_2667[i][j] - 2]++;
            }
        }
    }

    sort(result_2667, result_2667 + totalCount_2667 - 1);


    cout << totalCount_2667 - 1 << "\n";

    for (int i = 0; i < totalCount_2667 - 1; i++) {
        cout << result_2667[i] << "\n";
    }
}