#include<iostream>
using namespace std;

int main(){
    int r,d,x;
    cin >> r >> d >> x;

    int sum = x;
    for(int i=0;  i < 10 ; i++){
        sum = r * sum - d;
        cout << sum << endl;
    }
}