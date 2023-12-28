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
    途中で別の問題にいく場合は、終わったものファイルにrpdのいずれかをつける。
    問題文の理解 read
      実装時にミスが生じないためにも、ここは怠らず行う。
      脳死コピペだと実装のバグ修正で詰む
    実装方針決め plan
      生成AIを参考にするのはあり
      - most player 0
      - そうでないプレーヤー　まだ解いていない問題のうち、最大点の問題をから順に解いていく
        点数が超えていなかったら、次の高い点にいく。
        最大点を超えたら終わり、次のユーザでも同じことをする
    実装 do
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n, m;
  cin >> n >> m;
  vector<int> a(m), p(n);
  vector<string> s(n);
  rep(i, m) cin >> a[i];
  rep(i, n) cin >> s[i];
  rep(i, n)
  {
    p[i] += i + 1;
    rep(j, m)
    {
      if (s[i][j] == 'o')
      {
        p[i] += a[j];
      }
    }
  }
  int max_p = *max_element(p.begin(), p.end());
  /*
     これだと、xの問題の点数が異なってしまう。aiが2000 1000 500 700なら、
  　　降順ソートで1問目が700点になってしまう。

     解消するには、解いてない問題xの点数をそれぞれ持っていき降順ソートする。
  */
  // sort(a.rbegin(), a.rend());

  rep(i, n)
  {    
    vector<int> left_p;
    int count = 0;
    rep(j, m)
    {
      if (s[i][j] == 'x')
        left_p.push_back(a[j]);
    }
    sort(left_p.begin(),left_p.end());
    while(p[i] < max_p) {
      p[i] += left_p.back();
      left_p.pop_back();
      count++;
    }
    cout << count << endl;
  }
  return 0;
}