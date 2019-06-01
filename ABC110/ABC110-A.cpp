#include<algorithm>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int A,B,C; cin >> A >> B >> C;
    cout << max({A*10+B+C,B*10+A+C,C*10+A+B}) <<endl;
}