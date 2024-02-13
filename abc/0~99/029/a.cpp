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

void f(int x,string s) {
  if (x == 0) {
    cout << s << endl;
  } else {
    for (char c = 'a'; c <= 'c'; c++)
    {
      f(x-1,s+c);
    }
  }
}

int main()
{
  // 実装に悩む場合、20分考えて無理なら答え見る

  // 解説見た
  // for a to cの重複ループをn(maxで8)回やればいい。
  // n==1のとき a to cループは1重
  // n==2のとき a to cループは2重
  // n==3のとき a to cループは3重
  // n==4のとき a to cループは4重
  // ....
  // n==8のとき a to cループは8重

  // ただ8重ループは書きたくないので再帰で実装する方針でいく
  // 再帰をコンテスト本番でできるかというと不安
  int n;
  cin >> n;
  f(n,"");
  // シミュレーションする
  // n == 2のとき
  // f(2,"")
  // f(1,""+'a')が実行
  // f(0,"a"+'a')が実行
  // "aa"を出力
  return 0;
}