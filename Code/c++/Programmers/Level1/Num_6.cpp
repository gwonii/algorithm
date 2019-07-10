//
// Created by hoho on 2019-07-05.
//

#include <iostream>
#include <vector>

#define MAX 31

using namespace std;



//void reculsive_6(int n, vector<int> lost, vector<int> reserve,
//        int countL_6, int countR_6) {
//
//    if(!memo[countL_6][countR_6]){
//        if(lost[countL_6] - reserve[countR_6] < 2
//           && lost[countL_6] - reserve[countR_6] > -2 ){
//            max ++;
//            memo[countL_6][countR_6] = true;
//            return;
//        } else if(countL_6 > lost.size()){
//            return;
//        } else if(countR_6 > reserve.size()){
//            return;
//        }
//    }
//
//
//    reculsive_6(n, lost, reserve, countL_6++, countR_6++);
//    reculsive_6(n, lost, reserve, countL_6++, countR_6);
//    reculsive_6(n, lost, reserve, countL_6, countR_6++);
//}

int func_6(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    int *stu = new int[n];

    for (int i = 0; i < n; i++) {
        stu[i] = 1;
    }


    for (int i = 0; i < lost.size(); i++) {
        stu[lost[i] - 1] = 0;
    }
    for(int i = 0; i < reserve.size(); i++){
        stu[reserve[i] - 1] = 2;
    }
    for(int i = 0; i < n; i++){
        cout << stu[i] << ", ";
    }
    cout << "\n";


    for(int i = 0; i < n; i++){
        if(stu[i] == 2) {
            if(stu[i - 1] == 0 && i != 0){
                stu[i - 1] ++;
                stu[i] --;
            } else if (stu[i + 1] == 0 && i != n-1){
                stu[i + 1] ++;
                stu[i] --;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(stu[i] >= 1){
            answer++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << stu[i] << ", ";
    }


    return answer;

}

void method_6() {

    int n = 5;
    vector<int> lost = {2, 4};
    vector<int> reserve = {1, 3, 5};

    cout << func_6(n, lost, reserve) << "\n";


}