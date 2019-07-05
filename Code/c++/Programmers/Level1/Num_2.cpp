//
// Created by hoho on 2019-07-05.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


string method_2(vector<string> participant, vector<string> completion) {

    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i=0;i<participant.size();i++)
    {
        if(i == participant.size()-1)
        {
            answer = participant[i];
            break;
        }
        if(participant[i] != completion[i])
        {
            answer = participant[i];
            break;
        }
    }
    return answer;
}