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
using G = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;
// 8方向
const vector<int> di = {-1, -1, 0, 0, 1, 1, 1, -1};
const vector<int> dj = {0, 1, -1, 1, -1, 0, 1, -1};

int main()
{
  ll n;
  cin >> n;
  // 問題文の意味は分かったが、解く方針は全く
  // グラフ？
  // 解く時間とか

  // 解説見たら、分からんが最短経路問題というアルゴリズム使うみたい
  // ダイクストラ法のキャッチアップが完了していないので、一旦放置やな
  // https://algo-method.com/tasks/1008 
  return 0;
}