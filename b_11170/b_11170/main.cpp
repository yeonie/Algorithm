#include<iostream>
using namespace std;


int main(){
    char square[5][7][50];
    
    int n;
    int First, Second;
    int answer=9999999;
    string s;
    cin>> n;
    
    for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 5; ++j) {
                cin >> s;
                for (int k = 0; k < 7; ++k) {
                    square[j][k][i] = s[k];
                }
            }
    }
    
    for (int pivot = 0; pivot < n; pivot++) {
            for (int target = pivot + 1; target < n; target++) {
                int count = 0;
                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 7; j++) {
                        count += (square[i][j][pivot] != square[i][j][target]);

                        if (count > answer) break;
                    }
                }
                if (count < answer) {
                    answer = count;
                    First = pivot + 1;
                    Second = target + 1;
                }
            }
        }

        printf("%d %d", First, Second);
    
    return 0;
}


