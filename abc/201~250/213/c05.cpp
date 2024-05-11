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

// 座標圧縮
vector<int> compress(vector<int> a) {
  // int n = a.size();
  vector<int> b = a;
  sort(all(a));
  a.erase(unique(all(a)),a.end());
  vector<int> res(b.size());
  rep(i,b.size()) {
    res[i] = lower_bound(all(a),b[i])-a.begin();
  }
  return res;
}

int main()
{
  // 実装に悩む場合、20分考えて無理なら答え見る
  /*
  復習
    解説記事見たメモ
      index番号自体は同じなので、行と列独立して考えることができる。

    解説動画見たメモ
    コーナーケース　解説後
    参考記事リンク    
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
    https://qiita.com/ysk24ok/items/30ae72f4f1060b088588
      ex: vectorの重複を削除する unique erase 座標圧縮 
    ステータス　自力ACか解説ACか、まだ理解できてないのか書く
  */
  int h,w,n;
  cin >> h >> w >> n;
  vector<int> a(n),b(n);
  rep(i,n) cin >> a[i] >> b[i];
  a = compress(a);
  b = compress(b);
  rep(i,n) printf("%d %d\n",a[i]+1,b[i]+1);
  return 0;
}