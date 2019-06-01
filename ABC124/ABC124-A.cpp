#include<iostream>
using namespace std;

// 正答した自分の問い
// int main()
// {
//     int A,B; cin >> A >> B;
//     int ansSum = 0;
//     for (int i = 0; i < 2; i++)
//     {
//         if(A > B) {
//             ansSum += A;
//             A = A-1;
//         } else {
//             ansSum += B;
//             B = B-1;
//         }
//     }
//     cout << ansSum << endl;
// }

// 条件分岐1回で解ける、サンプルの答え
int main () {
    int A , B ; cin >> A >> B ;
    int ans ;
    if ( A > B ) {
        ans = A + (A -1);
    }
    else if (B > A ) {
        ans = B + (B -1);
    }
    else {
        ans = A + B ;
    }
    cout << ans << endl ;
}
