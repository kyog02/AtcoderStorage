#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n ;

    int digit = to_string(n).length();
    int ans = 0;
    
    // // 1桁目
    // if (1 < digit)
    // {
    //     ans += 9;
    // }
    // else
    // {
    //     // 1桁の値
    //     cout << n << endl;
    //     return 0;
    // }

    // // 2桁目
    // if(2 < digit)
    // {
    // }
    // else
    // {
    //     cout << ans << endl;
    //     return 0;   
    // }
    
    // // 3桁目
    // if(3 < digit)
    // {
    //     ans += 900;
    // }
    // else
    // {
    //     ans += (n - 99);
    //     cout << ans << endl;
    //     return 0;   
    // }

    // // 4桁目
    // if(4 < digit)
    // {
        
    // }
    // else
    // {
    //     cout << ans << endl;
    //     return 0;   
    // }

    // // 5桁目
    // if(5 < digit)
    // {
    //     ans += 90000;
    //     cout << ans << endl;
    //     return 0;
    // }
    // else
    // {
    //     ans += (n - 9999);
    //     cout << ans << endl;
    //     return 0;   
    // }


    /***************************************/
    // 別解
    // 桁数が増えた直後は割り切れてしまうため、上限ループに1を加算している。ex)100など
    for(int j = 1;j<(n+1);++j)
    {
        if((to_string(j).length() % 2) == 1)
            ans+= 1;
    }

    cout << ans << endl;
    return 0;
    /***************************************/
}