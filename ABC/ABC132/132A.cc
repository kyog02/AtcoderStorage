#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if(s.length() != 4)
        return 0;

    for(int i = 0; i < s.length(); i++)
    {
        if((s[i]>= 'a') && (s[i]<='z'))
        {
            return 0;
        }

    }

    // AABB
    if(s[0] == s[1])
    {
        if(s[2] == s[3] && s[0] != s[2])
        {
            cout << "Yes" << endl;
            return 0;
        }
    } 

    // ABAB
    else if(s[0] == s[2])
    {
        if(s[1] == s[3] && s[0] != s[1])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    // ABBA
    else if(s[0] == s[3])
    {
        if(s[1] == s[2] && s[0] != s[1])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}