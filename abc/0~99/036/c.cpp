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

vector<int> f(vector<int> a)
{
  // コピー
  vector<int> b = a;

  // B を小さい順にソート
  sort(b.begin(), b.end());

  // B から重複を除去する
  b.erase(unique(b.begin(), b.end()), b.end());

  // 座標圧縮した結果を求める
  vector<int> res(a.size());
  for (int i = 0; i < a.size(); ++i)
  {
    res[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
  }
  return res;
}

int main()
{
  int n;
  cin >> n;
  // 要するに、aiが何番目に小さいかを出力する
  // それぞれの要素が「全体の中で何番目に小さいか」を求めていく作業を、競プロ界では座標圧縮 (座圧) とよびます。
  // https://drken1215.hatenablog.com/entry/2021/08/09/235400
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  vector<int> ans = f(a);
  for (int b:ans) cout << b << endl;
  return 0;
}