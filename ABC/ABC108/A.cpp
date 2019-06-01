#include<algorithm>
#include<cmath>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int K;cin >>K;
    // pow()は動的に値を変更できるのがメリット
    // 固定値ならば(x * x)で二乗したほうが速度は速い。
    if(K%2==0)
        cout << pow(K/2,2) << endl;
    else
        cout <<  (K/2)*(K/2+1) << endl;
}