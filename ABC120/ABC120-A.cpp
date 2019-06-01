#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    // if(B >= A*C)
    //     cout << C << endl;
    // else
    //     cout << B/A << endl;
    cout << min(B/A,C) << endl;
}