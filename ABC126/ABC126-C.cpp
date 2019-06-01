#include <algorithm>
#include <iostream>
#include <random>
using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;

    random_device rnd;

    // ex:3面サイコロで、Kが10の場合
    int diceScore = rnd();
    int scoreSum = 0;

    while(1)
    {
        if(1 <= diceScore && diceScore < K)
        {
            
            continue;
        }
        else
        {
            break;
        }       
    }

    return 0;
}

// 最初に出たサイコロの目ごとに処理していき、最後にそれぞれの確率を合計します。
// それぞれ、何回コインの表を出し続けることで初めて得点が K 以上になるかは、ループで数えることで求
// めることができます。この回数だけコインが表を出し続けることが必要です。(途中で裏が出てしまったら得
// 点は 0 となるので、勝つことはできません)。
// サイコロを 1 回振り i (1 ≤ i ≤ N) が出る確率は 1/N です。そのそれぞれに対し、 t 回コインの表を出し
// 続ける必要がある場合、成功率は 0.5
// t となります。1/N × 0.5
// t のすべての合計が求める答えになります。
// 以上の方法で計算すると、計算量は O(NlogK) となり、間に合います。
// C++ での実装例は以下の通りです。
// int main(){
//  int a,b;scanf("%d%d",&a,&b);
//  double ret=0;
//  for(int i=1;i<=a;i++){
//      double tmp=1.0/a;
//      int now=i;
//      while(now<b){
//          now*=2;
//          tmp/=2;
//      }
        // ret+=tmp;
//  }
//  printf("%.12f\n",ret);
// }