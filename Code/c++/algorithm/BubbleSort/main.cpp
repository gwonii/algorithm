#include <iostream>

using namespace std;

int main() {

    int i,j, temp;
    // 오름차순
    int array[5] = {2, 3, 1, 4, 5};


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for(int k : array){
        printf("%d\n", k );
    }

    return 0;
}