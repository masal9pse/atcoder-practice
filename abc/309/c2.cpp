#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
#include <cassert>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
    /*
      問題文の理解 15m
        実装時にミスが生じないためにも、ここは怠らず行う。
        脳死コピペだと実装のバグ修正で詰む

        1種類目の薬は、6日間毎日3錠摂取する必要あり
        2種類目の薬は、2日間毎日5錠摂取する必要あり
        3種類目の薬は、1日間9錠摂取する必要あり
        4種類目の薬は、4日間2錠摂取する必要あり

        1日目 1,2,3,4種類目全ての薬を摂取する必要がある
        2日目 1,2,4種類目の薬を摂取する必要がある
        3日目 1,4種類目の薬を摂取する必要がある
        4日目 1,4種類目の薬を摂取する必要がある
        5日目 1種類目の薬を摂取する必要がある
        6日目 1種類目の薬を摂取する必要がある
        6日目 もう飲まなくていい
      実装方針決め m
        生成AIを参考にする
        
        1. 日にちごとの摂取数をvectorで持つ？
          O(Na) 間に合わない
        
        2. report from AI message↓
          この問題は、貪欲法を用いて解くこともできる。 そのやり方も検討
          貪欲法では、高橋君が1日に服用する薬の種類を、服用量の少ないものから順に選んでいく。
          この場合、高橋君は1日目から3日目まで、それぞれ1錠、2錠、3錠ずつ服用することになる。
          K=5であるため、高橋君が初めてK錠以下になる日数は、6日目である。
        
        3. この方針で実装する
         日付の早い順にならべるのと、薬の合計を持っておく
         日付が経つごとに摂取した薬を引いていく。
         K以下になったら、その日が答え
         
         「とりあえずソートできる場所を探す」は正かもしれない
        
      実装 m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int n,k;
    cin >> n >> k;
    vector<P> m(n);
    ll total = 0;
    rep(i,n) {
      cin >> m[i].first >> m[i].second;
      total += m[i].second;
    }
    sort(m.begin(),m.end());

    if (total <= k) {
      cout << 1 << endl;
      return 0;
    }

    rep(i,n) {
      total -= m[i].second;
      if (total <= k) {
        cout << m[i].first + 1 << endl;
        return 0;
      }
    }
    return 0;
}