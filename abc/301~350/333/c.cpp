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
    問題文の理解 m
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め m
      1. コンテスト時の思考
      nが333の時、112222222233で10^8以上なのでここまでループは回せない
      2回ループを回して、残り一回は2回のループ合計の引き算から取得すればいけそう？
      2. コンテスト後
        > nが333の時、112222222233で10^8以上なのでここまでループは回せない
        112222222233、12桁だから12回*3ループを回せばいい

    実装 m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
      30m頼って無理なら動画見る。
  */
  int n;
  cin >> n;
  int k = 10;
  ll output = 0;
  // vector<int> a = {1,11,111,1111,11111,111111,1111111,};
  vector<ll> a(12);
  rep(i, 12)
  {
    // output
    // 1 11 111 1111
    output = (ll)(output * k) + 1;
    a[i] = output;
    // cout << output << endl;
  }

  // vector<ll> ans;
  set<ll> ans;
  rep(i, 12)
  {
    int r1 = 0;
    rep(j, 12)
    {
      rep(k, 12)
      {
        ll sum = a[i] + a[j] + a[k];
        // ans.push_back(sum);
        ans.insert(sum);
      }
    }
  }
  
  int count = 1;
  for (auto v:ans)
  {
    if (count == n) {
      cout << v << endl;
      return 0;
    }
    count++;
  }
  
  return 0;
}