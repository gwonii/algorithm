//
// Created by hoho on 2019-07-01.
//

#include "Code_1759.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int L_1759, C_1759;
set<string> resultWord;
vector<char> inputChar;

// 알파벳 개수 26개
// 트리를 그려가며 생각해보자
void dfs(int index, int count, string word) {

    if (count > L_1759 - 1) {

        int chk1 = 0;       // 모음 체크
        int chk2 = 0;       // 자음 체크
        int visit[27] = {0,};

        for (int i = 0; i < word.length(); i++) {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i'
                || word[i] == 'o' || word[i] == 'u') {
                chk1++;
            } else {
                if (visit[(int) word[i] - 97] == 0) {
                    visit[(int) word[i] - 97] = 1;
                    chk2++;
                }
            }
        }

        if (chk1 >= 1 && chk2 >= 2) {
            resultWord.insert(word);
        }
        return;
    }


    for (int i = index; i < C_1759; i++) {
        dfs(i + 1, count + 1, word + inputChar[i]);
        dfs(i + 1, count, word);
    }
}

void method_1759() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> L_1759 >> C_1759;

    inputChar.resize(C_1759);
    for (int i = 0; i < C_1759; i++) {
        cin >> inputChar[i];
    }

    sort(inputChar.begin(), inputChar.end());

    dfs(0, 0, "");


    for(auto it = resultWord.begin(); it != resultWord.end(); it++) {
        cout << *it << "\n";
    }

}