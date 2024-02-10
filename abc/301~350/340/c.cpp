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
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

map<ll,ll> memo;

// 再帰関数
ll calculateCost(ll n)
{
  // ベースケース: Nが1以下の場合はコスト0
  if (n <= 1)
  {
    return 0;
  }

  // メモがあればそれを返す
  if (memo.find(n) != memo.end())
  {
    return memo[n];
  }

  // xを選ぶための最小コストを計算  
  ll x1 = n / 2;

  ll x2;
  if (n % 2 == 0) x2 = n/2;
  else x2 = n/2+1;
  // ll cost1 = n % 2 + calculateCost(x1) + x1;
  // ll cost2 = n % 2 + calculateCost(x2) + x2;
  // 別関数にしたほうがいいか。。
  // いやそうすると処理が複雑になる
  // C程度では100行にはならんよ
  ll cost1 = calculateCost(x1);
  ll cost2 = calculateCost(x2);

  // メモに結果を保存
  memo[x1] = cost1;
  // memo[n] = x1;
  memo[x2] = cost2;
  // memo[n] = x2;

  return memo[n];
}

int main()
{
  ll n;
  cin >> n;
  // 消す文字の選定をどうするか
  // 全探索は無理
  // メモ化再帰でコストを計算
  // ll result = calculateCost(n);

  // // 結果の出力
  // cout << result << endl;
  // やらないといけない処理が2つあるのがややこいな
  while ()
  {
    /* code */
  }
  
  return 0;
}