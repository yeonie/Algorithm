//
//  main.cpp
//  b_1969
//
//  Created by 이동연 on 2021/01/25.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n, m;
    int sum = 0;
    cin>> n >> m;
    
    string DNA[1001];
    vector<char>ans;
    
    for(int i = 0 ; i < n ; i ++){
        cin>>DNA[i];
    }
    
    for(int i = 0 ; i < m ; i++){
        int checker[26]{0};
        for(int j = 0 ; j < n ; j++){
            checker[DNA[j][i]-65]+=1;
        }
    
    int max = 0, maxindex = 0;
        for (int i = 0; i < 26; ++i)  // 26번 a부터 돌면서 최고값, 그때의 index를 구한다.
        {
            if (max < checker[i]){
                max = checker[i];
                maxindex = i;
            }
        }
    int subsum = 0;
    // 한번이상 표기 됬으나 최대값의 index는 아닌 알파벳들을 세준다.
    for(int i = 0; i < 26; ++i) {
        if(checker[i] > 0 && checker[i] <= max && i != maxindex){
            subsum += checker[i];
        }
        ans.push_back(maxindex + 65); //최대값 알파벳을 넣어준다.
        sum += subsum;
    }
    for(int i = 0; i < ans.size(); ++i){
    cout << ans[i];
    }
    cout << endl;
    cout << sum << endl;
    

}
