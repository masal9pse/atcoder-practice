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
#include <stack>
#include <queue>
#include <deque>
#include <numeric>
using namespace std;
using ll = long long;
template <class T>
using P = pair<T, T>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  // 実装に悩む場合、20分考えて無理なら答え見る
  int n;
  cin >> n;
  vector<int> ng(3);
  rep(i, 3) cin >> ng[i];
  // sort(ng.rbegin(),ng.rend());
  int ans = n;
  // 解説見た
  // 1,2,3それぞれ100通りあるから1^100*3 3^100になる => オーバーフローするくらいでかい
  // 貪欲法にする dpでもいけるみたいだけど学習不足

  // このコード落とし込みがどうしてもできん
  // まず3を削ろうとする。もしNG数字と被るなら、諦めて2を削ろうとする。それでもNG数字に被るなら、諦めて1を削ろうとする。それでも被るなら諦める。
  // というのを、n が 0 になるまで繰り返す。もちろん、何回引いたかをカウントしながら。

  // NG数になったらダメ、つまり初めのnがng数と合致したらその時点でNOを出力
  // これなぜか思いつかなった、ほんとにバカ
  if (n == ng[0] || n == ng[1] || n == ng[2])
    cout << "NO" << endl;
  else
  {
    rep(i, 100)
    {
      // ng数に合致したら、2で引く、2でも合致したら1で引く
      // 解説のngをソートする意味がわかってない
      // https://pyteyon.hatenablog.com/entry/2019/03/12/185952
      if (n-3 == ng[0] || n-3 == ng[1] || n-3 != ng[2]) n-= 2; // これだと -2することが確定しない。
      // 全てn-3に合致しなかったら-3するみたいな考え方の方が理にかなっている
      else if (n-2 != ng[0] && n-2 != ng[1] && n-2 != ng[2]) n-=2;
      else if (n-1 != ng[0] && n-1 != ng[1] && n-1 != ng[2]) n-= 1;
      if (n <= 0) break;

      // マイbadコード
      // int minus = 3;
      // rep(j, 3) if (ans == ng[k]) minus = 2;
      // rep(j, 3) if (ans == ng[k]) minus = 2;

      // if (ans == ng[1])
      //   minus = 1;
      // ans -= minus;
      // if (ans <= 3)
      // {
      //   cout << "YES" << endl;
      //   return 0;
      // }
    }
    if (n <= 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  // cout << "NO" << endl;
  return 0;
}