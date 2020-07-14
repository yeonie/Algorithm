//
//  main.cpp
//  prisonerCampAlgorithm
//
//  Created by 이동연 on 31/05/2020.
//  Copyright © 2020 litong. All rights reserved.
//
#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>


using namespace std;

typedef long long ll;
int N, M;
pair<ll, ll> start;
vector<pair<ll,ll>> prisoner;


bool criteria(pair<ll, ll> a, pair<ll,ll> b)
    {
        ll a_p = a.first - start.first;
        ll a_q = a.second - start.second;
        ll b_p = b.first - start.first;
        ll b_q = b.second - start.second;
        
        if (1LL * a_q * b_p != 1LL * a_p*b_q){
            return 1LL * a_q * b_p < 1LL * a_p*b_q;
        }
        else{
            return 1LL * a_q * b_p >= 1LL * a_p*b_q;
        }
    }
bool criteria2(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.second == b.second ? a.first < b.first : a.second < b.second;
}
long long ccw(pair<ll, ll> a, pair<ll, ll> b, pair<ll, ll> c)
{
    return 1LL * (a.first * b.second + b.first * c.second + c.first * a.second - b.first * a.second - c.first * b.second - a.first * c.second);
}
void Solve()
{
    stack<pair<int, int>> st;
    int next = 2;
    st.push(prisoner[0]), st.push(prisoner[1]);
    while (next < M)
    {
        while (st.size() >= 2)
        {
            pair<ll, ll> second = st.top();
            st.pop();
            pair<ll,ll> first = st.top();
            if (ccw(first, second, prisoner[next]) > 0)
            {
                st.push(second);
                break;
            }
        }
        st.push(prisoner[next]);
        next++;
        
    }
    cout << st.size() << " " << M - st.size();
}
int main(void)
{
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        long long x, y;
        cin >> x >> y;
        prisoner.push_back(make_pair(x, y));
    }
    sort(prisoner.begin(), prisoner.end(), criteria2);
    start = prisoner[0];
    sort(prisoner.begin(), prisoner.end(), criteria);
    Solve();
    return 0;
}
