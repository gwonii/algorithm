//
// Created by hoho on 2019-07-06.
//

#include <iostream>
#include <string>


using namespace std;

int func(int i, int num) {

    int result = 0;

    if(num < 91){
        return 65 + i + (-2 * i + 25);
    } else {
        return 97 + i + (-2 * i + 25);
    }
}

void method_P3(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    // 총 26개
    string s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string Ss = {"abcdefghijklmnopqrstuvwxyz"};
    string inputString;

    getline(cin,inputString);


    int index = 0;
    for(int i = 0; i < inputString.length(); i++){
        if(inputString[i] == ' '){
            cout << " ";
        }
        if( inputString[i] < 91){
            for(int j = 0; j < s.length(); j++){
                if(s[j] == inputString[i]){
                    index = j;

                    char temp = (char)func(index, (int)inputString[i] );
                    cout << temp;
                }
            }
        } else if (inputString[i] > 96){
            for(int k = 0; k < Ss.length(); k++){
                if(Ss[k] == inputString[i]){
                    index = k;

                    char temp = (char)func(index, (int)inputString[i] );
                    cout << temp;
                }
            }
        }



    }

}