#include<iostream>
#include<vector>
#include<algorithm>
#include <map>
using namespace std;


void B_DescripionAns(){
    int N;
    cin >> N;
    vector<tuple<string,int,int>> a;// 市名、点数、IDを設定する。
    for(int i=1;i<=N;++i){
        string S;
        int P;
        cin >> S >> P;
        P = -P;//正負反転。理由はソート関数はデフォルトだと昇順に並べるため、降順に並び替えるため符号を逆にする
               //なお、点数は出力しないので、そのままにしといてよし。
        a.push_back(tie(S,P,i)); // Vectorのtupleに値を入れるときのやりかた
    }

    // まず第一引数の文字列を辞書順にして、同じ文字列の場合は第二引数の点数で決める
    sort(a.begin(),a.end());

    for(int i=0;i<N;i++)
        cout << get<2>(a[i]) << endl; // tupleの3番目の要素取得(ID)
}


int main(){
    B_DescripionAns();
    // int N;
    // cin >> N;
    // string RestrunStr[255];
    // int RestrunNum[255];
    
    // for(int i = 1; i<=N; i++){
    //     int P;
    //     string S;
    //     cin >> S >> P;
    //     RestrunStr[i] = S;
    //     RestrunNum[i] = P;
    // }

    // map<int,int> ans;
    // int i =1;
    // int num = 1;
    // for(i = 1; i <= N; i++){
    //     num = 1;        
    //     for(int j = 1; j <= N; j++) {
    //         // string同士で比較すると、辞書順かどうかチェックできる
    //         if(RestrunStr[i] < RestrunStr[j]){
    //         }
    //         else if(RestrunStr[i] == RestrunStr[j]){
    //             if(RestrunNum[i] > RestrunNum[j]){
    //             }
    //             else if(RestrunNum[i] == RestrunNum[j]){
    //             }
    //             else{
    //                 num++;
    //             }
    //         }
    //         else{
    //             num++;
    //         }
    //     }
    //     ans[num] = i;
    // }

    // for(int aa = 1; aa <= N ;aa++)
    // {
    //     cout << ans[aa] << endl;
    // }

}