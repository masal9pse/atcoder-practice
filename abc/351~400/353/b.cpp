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
  /*
  提出前チェックリスト
  　- 簡単な問題でも制約は必ずチェック、これによって無駄な実装時間が減る
  メモ
  わからない点まとめ   
  */
  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  vector<bool> ride(n);
  rep(i,n) cin >> a[i];
  int count = 0;
  rep(i,n) {
    if (ride[i]) continue;
    int K = k;
    int j = i;
    while (K)
    {
      // 最後＋１のindexにアクセスしていたのに気が付かなかった、本番で気づいてえらい
     if (j == n) break;
     if(a[j] <= K) {
      K -= a[j];
      ride[j] = true;
      j++;
     }
     else break;
    }
    count++;
  }
  cout << count << endl;
  return 0;
}