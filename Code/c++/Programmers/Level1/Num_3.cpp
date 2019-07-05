//
// Created by hoho on 2019-07-05.
//

#include <iostream>
#include <vector>

#define MAX 10001

using namespace std;

vector<int> method_3(vector<int> answers) {
    vector<int> answer;

    vector<int> firP;
    vector<int> secP;
    vector<int> thiP;
    int firPCount = 0;
    int secPCount = 0;
    int thiPCount = 0;

    int count = 1;
    for(int i = 0; i < MAX; i++){
        if(count == 5){
            firP.push_back(count);
            count = 1;
            continue;
        } else {
            firP.push_back(count);
        }
        count++;
    }
    // 두번 째 학생
    count = 1;
    for(int i = 0; i < MAX; i++){
        if(i % 2 == 0){
            secP.push_back(2);
        } else {
            if (count == 2){
                secP.push_back(count + 1);
                count = 4;
                continue;
            }

            secP.push_back(count);

            if(count == 5){
                count = 1;
                continue;
            }
            count++;
        }
    }

    //세 번째 학생
    count = 3;
    int index = 0;
    for(int i = 0; i < MAX; i++){
        if(count == 3){
            thiP.push_back(count);
            index++;
            if(index == 2){
                count = 1;
                index = 0;
            }
        } else if (count == 1){
            thiP.push_back(count);
            index++;
            if(index == 2){
                count = 2;
                index = 0;
            }
        } else if (count == 2) {
            thiP.push_back(count);
            index++;
            if(index == 2){
                count = 4;
                index = 0;
            }
        } else if (count == 4) {
            thiP.push_back(count);
            index++;
            if(index == 2){
                count = 5;
                index = 0;
            }
        } else if (count == 5) {
            thiP.push_back(count);
            index++;
            if(index == 2){
                count = 3;
                index = 0;
            }
        }
    }

    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == firP[i]){
            firPCount++;
        }
        if(answers[i] == secP[i]){
            secPCount++;
        }
        if(answers[i] == thiP[i]){
            thiPCount++;
        }
    }

    int maxCount = -1;

    if(firPCount > maxCount){
        maxCount = firPCount;
    }
    if(secPCount > maxCount){
        maxCount = secPCount;
    }
    if(thiPCount > maxCount){
        maxCount = thiPCount;
    }

    if(firPCount == maxCount){
        answer.push_back(1);
    }
    if(secPCount == maxCount){
        answer.push_back(2);
    }
    if(thiPCount == maxCount){
        answer.push_back(3);
    }



    return answer;
}