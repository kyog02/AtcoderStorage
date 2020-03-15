#include<algorithm>
#include<cmath>
#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;

    int S[10] = {};
    int C[10] = {};
    for(int i=0;i<M;i++)
    {
        cin >>S[i] >> C[i]; 
    }

    // 先頭桁が0の場合NG。ただし0の場合は除く。
    if(N != 1)
    {
        for(int i=0; i<M;i++)
        {
            if(S[i] == 1)
            {
                if(C[i] == 0)
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }

    // S[i]の中に同じ桁が存在したら同じ値以外NG
    for(int i=0; i<M;i++)
    {
        for(int j=1;j<M;j++)
        {
            if(S[i] == S[j])
            {
                if(C[i] != C[j])
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }



    int Ans = 0;
    bool keta3 = false;
    bool keta2 = false;
    bool keta1 = false;

    for(int i=0;i<M;i++)
    {
        switch(S[i])
        {
            case 1:
                if(!keta3)
                {
                    if(N == 3)
                    {
                        Ans += (C[i]*100);
                        keta3 = true;
                    }
                    else if(N == 2)
                    {
                        Ans += (C[i]*10);
                        keta3 = true;
                    }
                    else if(N == 1)
                    {
                        Ans += (C[i]);
                        keta3 = true;
                    }
                }
                break;
            case 2:
                if(!keta2)
                {
                    if(N == 3)
                    {
                         Ans += (C[i]*10);
                         keta2 = true;
                    }
                    else if(N==2)
                    {
                        Ans += C[i];
                        keta2 = true;
                    }
                }
                break;
            case 3:
                if(!keta1)
                {
                    Ans += (C[i]);
                    keta1 = true;
                }
                break;    
        }
    }

    // 3桁なのに、3桁存在しない場合
    if(N == 3 && Ans < 100)
        Ans += 100;
    if(N == 2 && Ans < 10)
        Ans += 10;

    cout << Ans << endl;
    return 0;

}