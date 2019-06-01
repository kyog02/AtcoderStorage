#include<algorithm>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int N;cin >> N;
    if(N==1){
        cout << "Hello World" << endl;
        return 0;
    }

    if(N==2){
        int A,B; cin >> A >> B;
        cout << A+B << endl;
        return 0;
    }
}