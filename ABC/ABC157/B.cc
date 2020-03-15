#include<algorithm>
#include<cmath>
#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int bingocard[3][3] = {};

    for(int i = 0; i<3;i++)
    {
        cin >> bingocard[i][0] >> bingocard[i][1] >> bingocard[i][2];
    }

    int N;
    cin >> N;

    int b[128];
    for(int i=0; i<N;i++)
    {
        cin >> b[i];
    }
    
    bool aki[3][3] = {false};

    for(int i=0; i<N;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(bingocard[j][k] == b[i])
                    aki[j][k] = true;
                //printf("bingocard[%d][%d] = %d, b[%d] = %d, aki=[%d][%d] = %d\n",j,k,bingocard[j][k],i,b[i],j,k,aki[j][k]);
            }
        }
    }

    // ビンゴを確認
    if(aki[0][0] && aki[0][1] &&aki[0][2])
        cout << "Yes" << endl;
    else if(aki[1][0] && aki[1][1] &&aki[1][2])
        cout << "Yes" << endl;
    else if(aki[2][0] && aki[2][1] &&aki[2][2])
        cout << "Yes" << endl;
    else if(aki[0][0] && aki[1][0] &&aki[2][0])
        cout << "Yes" << endl;
    else if(aki[0][1] && aki[1][1] &&aki[2][1])
        cout << "Yes" << endl;
    else if(aki[0][2] && aki[1][2] &&aki[2][2])
        cout << "Yes" << endl;
    else if(aki[0][0] && aki[1][1] &&aki[2][2])
        cout << "Yes" << endl;
    else if(aki[0][2] && aki[1][1] &&aki[2][0])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}