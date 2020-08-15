#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int>&b){
    return(a.second < b.second);
}

int main(void){
    vector<pair<int, int>> meetings;
    int meetingsN;
    int answer = 1;
    cin>> meetingsN;
    for(int i = 0 ; i < meetingsN ; i++){
        int start, end;
        cin>> start >>end;
        meetings.push_back(make_pair(start, end));
    }
    sort(meetings.begin(), meetings.end());
    sort(meetings.begin(), meetings.end(), compare);
    
    int whatsNext = meetings[0].second;
    
    for(int i = 1; i < meetingsN;i++){
        if(meetings[i].first>=whatsNext){
            whatsNext = meetings[i].second;
            answer++;
        }
    }
    
    
    
    cout<< answer;
}
