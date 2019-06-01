#include <iostream>
using namespace std;

// T + 0.5 秒後までに生産される回数は、T を A で割った商 ⌊T/A⌋ (T を A で割った切り捨て) です。
// ->だから、+0.5はいらない。。
int main(){
    int A,B,T; cin >> A >> B >> T;
    //T = T+0.5;
    int result = T / A * B;
    cout << result << endl;
    return 0;
}