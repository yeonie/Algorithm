#include <iostream>

#include <queue>

#include <cstring> //memset

using namespace std;

 

const int MAX = 100;

 

int N, M;

int priority[MAX];

int order[MAX];

bool checked[MAX]; //몇등인지 체크했는지 여부

queue<int> q;

 

int Tth(void)

{

        int rank = 1;

 

        while (!q.empty())

        {

                 int temp = q.front();

                 q.pop();

 

                 int idx = 0;

                 bool top = true;

                 while (1)

                 {

                         //범위 초과

                         if (idx >= N)

                                 break;

 

                         if (idx == temp || checked[idx]) //해당 문서와 이미 체크한 문서 패스

                         {

                                 idx++;

                                 continue;

                         }

 

                         //우선순위가 더 큰 문서가 있다면

                         if (priority[temp] < priority[idx])

                         {

                                 q.push(temp); //큐에 다시 넣고

                                 top = false;

                                 break;

                         }

                         idx++;

                 }

 

                 if (top) //제일 우선순위가 크다면

                 {

                         checked[temp] = true; //등수 체크

                         order[temp] = rank++; //등수 표시

                 }

        }

        return order[M];

}

 

int main(void)

{

        int test_case;

        cin >> test_case;

 

        for (int i = 0; i < test_case; i++)

        {

                 cin >> N >> M;

                 memset(checked, false, sizeof(checked));

 

                 for (int j = 0; j < N; j++)

                 {

                         cin >> priority[j]; //우선순위 입력

                         q.push(j);

                 }

 

                 cout << Tth() << endl;

        }

        return 0;

}



