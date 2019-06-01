#include <iostream>
using namespace std;

// 条件分岐による回答
void SwitchAns(){
    char b; cin >> b;

    switch (b)
    {
        case 'A':
            cout << 'T' << endl;
            break;
        case 'T':
            cout << 'A' << endl;
            break;
        case 'C':
            cout << 'G' << endl;
            break;
        case 'G':
            cout << 'C' << endl;
            break;
        default:
            break;
    }
}

// 連想配列による回答
void ArrayAns(){
    char b, c[128];
    c['A'] = 'T';
    c['T'] = 'A';
    c['C'] = 'G';
    c['G'] = 'C';
    cin >> b;
    //cout << (int)b << endl; // 英文字を数値型で出力するとASCIIコードで表示される。ASCIIは127まで
    cout << c[(int)b] << endl;
    
}

int main(){
    //SwitchAns();
    ArrayAns();
}