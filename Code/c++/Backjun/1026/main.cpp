#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int minCompare(const void *a, const void *b){

    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1 < num2){
        return -1;
    } else if(num1 > num2) {
        return 1;
    } else {
        return 0;
    }
}

int maxCompare(const void *a, const void *b){

    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1 < num2){
        return 1;
    } else if(num1 > num2) {
        return -1;
    } else {
        return 0;
    }
}

int main() {

    int N;
    int temp, sum = 0;

    cin >> N;

    vector<int> A,B;

    for(int i = 0; i < N; i++){
        cin >> temp;
        A.push_back(temp);
    }

    for(int i = 0; i < N; i++){
        cin >> temp;
        B.push_back(temp);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());


    for(int i = 0; i < N; i++){
        sum += A[i] * B[i];
    }

    printf("%d\n" , sum);

}




