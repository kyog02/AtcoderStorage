#include<iostream>
using namespace std;

int main()
{
    int a,b; cin >> a >> b;
    if(a==b) return 0;

    if ((a-b) % 2 != 0)
        cout << "IMPOSSIBLE" << endl;
    else
        cout << abs((a-b)/2) + min(a,b) << endl;
    return 0;
}


// 例回答
// int main() {
//     long long A, B;
//     cin >> A >> B;
//     if(A % 2 != B % 2) {
//         cout << "IMPOSSIBLE" << endl;
//     } else {
//         cout << (A + B) / 2 << endl;
//     }
//     return 0;
//  }