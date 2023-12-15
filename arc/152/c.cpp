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
    問題文の理解 6m close
    実装方針決め m
      1. 奇数位置を座らせるシミュレーションを実装する
        1組目は、先に並べておく
        2組目の場合は、a1を奇数位置に座らせるようにする。
        奇数位置に座るようにする。
      2. 無理だった。
        法則性を見つけた。
          2組の椅子が4個になった時点で隣り合わないように座ることができる。
          つまり、Lから1組を引いていって残りが
          いや、1から先に計算できないので無理
          ex: aが、1 1 2このケース
          2つめの1が3番目に座ると次の2は座れない
      3. 解説見た
        左から順番に1つ席を開けるように座っていき、
        最後の2組の席が1個以下ならNoを出力

    実装 m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n, l;
  cin >> n >> l;
  vector<int> a(n);
  vector<bool> is_chars(l);
  rep(i, n) cin >> a[i];
  int last2_index = -1;
  rep(i,n) {
    if (a[i] == 2) last2_index = max(last2_index,i);
  }
  if (last2_index == -1) {
    cout << "Yes" << endl;
    return 0;
  }
  rep(i,last2_index) {
     if (a[i] == 1) is_chars[i+1] = true;
     else {
      is_chars[i+1] = true;
      is_chars[i+2] = true;
      int d = 3;
     }
  }
  int sum = 0;
  rep(i,l) {
    if (!is_chars[i]) sum++;
    else sum = 0;

    if (sum == 2) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}