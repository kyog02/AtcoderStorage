#include<algorithm>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    string n; cin>>n;
    // stringはcharの配列にもなる
    for(char c:n){
        if(c == '1')
            cout << 9;
        else
            cout << 1;        
    }

    // 文字の計算は辞書順。重要
    // for(char c:n){
    //     cout << (char)('1'+'9' - c);
    // }

    // ほぼC言語の書き方
    // int a[3] ={};
    // a[0] = (n % 10); n /= 10;// 1桁目を取り出す
    // a[1] = (n % 10); n /= 10;// 2桁目を取り出す
    // a[2] = (n % 10); n /= 10;// 3桁目を取り出す

    // for(int i=0;i<3;i++){
    //     if(a[i]==1)
    //         a[i] = 9;
    //     else if(a[i]==9)
    //         a[i] = 1;
    // }

    // int ans = a[2]*100 + a[1]*10 + a[0];
    // cout << ans << endl;
}