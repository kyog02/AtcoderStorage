#include<algorithm>
#include<cmath>
#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int maisuu = 0;
    cin >> maisuu;


    if(maisuu % 2 == 0)
        cout << maisuu / 2 << endl;
    else
        cout << maisuu / 2 + 1 << endl;
        return 0;
}