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
template<class T> using P = pair<T, T>;
template<typename T> bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
#define all(x) (x).begin(), (x).end()
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
  string s,t;
  cin >> s >> t;
  vector<string> x;
  int n = s.size();
  while (s != t)
  {
    string best;
    // 最善手を求めて、終わったらwhileの判定に戻る。
    rep(i,n) if (s[i] != t[i]) {
      string ns = s;
      ns[i] = t[i];
      if (best == "") best = ns;
      else best = min(best,ns);
    }
    s = best;
    x.push_back(s);
  }
  cout << x.size() << endl;
  for(string s:x) cout << s << endl;
  return 0;
}

いい情報をフィット
デジ長
digital idetity どこから利益を得ていこうと思っているのか？
国とやりとりする上で仕様上面倒な制約はあるか？
要件定義は個人でやる
マイナンバー
事業区分　一般事業者向けにやろうとしている。
itrust 

11~15時

課題
- 多言語対応 => Gold伝テスト
- methodchannel


まとめたimportファイルを
マルチもデュール
app