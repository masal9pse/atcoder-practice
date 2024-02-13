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
  // *がつながっている部分 => +1
  // *がつながっている部分に0が含まれていたら計算しない
  // +の個数 => +1
  // 上記まとめて、+の後ろの*で個数を判定
  // これをコードに落とし込む方針ができてない

  // 解説見た、こういうアルゴリズムで解いてる
  // 1. +であれば別の要素番号に格納
  // 2. *の連番であれば同じ要素番号に格納 43行目~59行目
  // 3. 格納した値をなめて0でなければ+1していく、つまり1,2では0判定を全くしない
  string s;
  cin >> s;
  int n = s.size();
  vector<ll> a;
  a.push_back(s[0] - '0');
  for (int i = 1; i < n; i += 2) // 演算子ごとにチェックする、つまり2ずつカウント、+2ずつする確認方法シンプルでいいな
  {
    if (s[i] == '+')
    {
      // stackに突っ込んでるが、なぜstackかはわからんので一旦おき
      // vectorでやって、問題なければそのままやるか
      a.push_back(s[i + 1] - '0');
    }
    else
    {
      ll v = a.back();
      v = v > 0 ? 1 : 0; // オーバーフローにならないように、1にする
      a.pop_back();
      a.push_back(v * (s[i + 1] - '0'));
    }
  }
  ll ans = 0;
  for(ll b:a) {
    if (b != 0) ans++;
  }
  cout << ans << endl;
  return 0;
}