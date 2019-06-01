#include<iostream>
using namespace std;
int main(){
    int A,B; cin >> A >> B;
    // 約数はAでBが割り切れる場合のAのこと
    cout << (B % A == 0 ? A+B:B-A) << endl; 
}