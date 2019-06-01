#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    
    char high[3] = {};
    S.copy(high,2);
    high[2] = '\0';

    char low[3] = {};
    S.copy(low,2,2);
    low[2] = '\0';

    int highNum = atoi(high);
    int lowNum = atoi(low); 
    // cout << "highNum = " << highNum << endl;
    // cout << "lowNum = " << lowNum << endl;

    bool isMMOKForHigh, isMMOKForLow;

    if(1 <= highNum && highNum <= 12 )
        isMMOKForHigh = true;
    else
        isMMOKForHigh = false;

    if(1 <= lowNum && lowNum <= 12 )
        isMMOKForLow = true;
    else
        isMMOKForLow = false;

    // cout << "isMMOKForHigh = " << isMMOKForHigh << endl;
    // cout << "isMMOKForLow = " << isMMOKForLow << endl;

    if(isMMOKForHigh && isMMOKForLow)
        cout << "AMBIGUOUS" << endl;
    else if(!isMMOKForHigh && isMMOKForLow)
        cout << "YYMM" << endl;
    else if(isMMOKForHigh && !isMMOKForLow)
        cout << "MMYY" << endl;
    else
        cout << "NA" << endl;
            
    return 0;
}

//解答例では
//int型の変数を入力してもらい
//前半の 2 桁の整数は例えば a/100 、後半の 2 桁の整数は a%100
//とすることで上位と下位を分けていた。
