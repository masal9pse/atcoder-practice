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

int main()
{
  /*
    xをどう選択するかが鍵になりそう
    問題文の理解 16m
    可能であればO(N)で求めたい
    解法方針決め
      間が少ないやつの最小iをxとするといけそう
      なんとなく累積和を使えばいける？
    時間切れ 解説読んだが理解できず。動画は見てない
    尺取り法?や二分探索を使えばいけるみたい
    二分探索で真ん中の値を取得して、左側と右側を分けて大きい方が答え
  */
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(),a.end());
  return 0;
}