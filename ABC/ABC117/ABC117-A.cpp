#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    double T,X; cin>> T >> X;
    //cout << T/X << endl;
    // setprecisionは小数点以下の桁指定
    // fixedは浮動小数点数を小数点表記で出力することを指示するマニピュレータ。
    cout << fixed << setprecision (10) << T/X << endl ;
}