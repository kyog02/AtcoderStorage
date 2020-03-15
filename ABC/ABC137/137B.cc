#include<iostream>

using namespace std;

int main()
{
    int left = -1000000;
    int right = 1000000;

    int k,x; cin >> k >> x;

    int min = x - (k - 1);
    int max = x + (k - 1);

    for(int i = min; i<max ;i++)
    {
        cout << i << " ";
    }

    cout << max;
    return 0;
}