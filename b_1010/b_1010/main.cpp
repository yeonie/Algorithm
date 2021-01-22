#include <iostream>
#include <vector>

using namespace std;



void Combination(vector<char> arr, vector<char> comb, int r, int index, int depth, int count)
{
    if (r == 0)
    {
        for(int i = 0; i < comb.size(); i++){
            
        }
        count++;
    }
    else if (depth == arr.size())  // depth == n
    {
        return;
    }
    else
    {
        comb[index] = arr[depth];
        Combination(arr, comb, r - 1, index + 1, depth + 1, count);
        
        Combination(arr, comb, r, index, depth + 1, count);
    }
    
    cout<< count;
}

int main()
{
    int count= 0;
    int n = 5;
    vector<char> vec(n);  // n = 5
    
    int r = 3;
    vector<char> comb(r);
    
    Combination(vec, comb, r, 0, 0, count);  // {'a', 'b', 'c', 'd', 'e'}의 '5C3' 구하기

    return 0;
}
