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
using namespace std;
using ll = long long;
using P = pair<int, int>;
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  /*
    問題文の理解 read m
    実装方針決め plan m
      O(NM)
      Niを見る際にMを2分探索すればいけそう
      lower_boundは初めて探索した中のkey以上を使用する
    実装 do m
      生成AIに頼ると、細かいテストケースで落ちることが多々ある
  */
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  rep(i, m)
  {
    int ans = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    cout << ans << endl;
  }
  return 0;
}