#include<iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    // 日付は辞書順の比較ができる。
    cout << (S <= "2019/04/30" ? "Heisei":"TBD") << endl;
}