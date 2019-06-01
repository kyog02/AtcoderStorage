#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    short N,K;
    cin >> N >> K;

    string S;
    cin >> S;

    // if(1 < N < 50)
    //     return 0;

    // if(1 < K < N)
    //     return 0;

    // if(S.length() != N)
    //     return 0;

    transform(S.begin()+K-1, S.begin()+K, S.begin()+K-1, ::tolower);
    cout << S << endl;    
    return 0;    
}