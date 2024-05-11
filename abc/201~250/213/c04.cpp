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

vector<int> compress(vector<int> a) {
  int n = a.size();
  map<int,int> mp;
  rep(i,n) mp[a[i]] = 0;
  int id = 1;
  for(auto& p:mp) p.second = id,id++;
  rep(i,n) a[i] = mp[a[i]];
  return a;
}

int main()
{
  // 実装に悩む場合、20分考えて無理なら答え見る
  /*
  復習
    解説記事見たメモ
      理解すること＋どうやったらその問題を初見で解けるか考える
      解説読んで大方理解できるが、落とし込みが面倒な時
        写経での解説ACでいい、ただし理解が9割できてからACすること
        解説読んでもわからないときに、とりあえず写経してみると案外理解が深まることがある。

    解説動画見たメモ
    コーナーケース　解説後
    参考記事リンク    
    関連キーワード　使用アルゴリズムか考え方等を記載して、コンテスト本番で検索できるようにする
      ex: 座標圧縮
    ステータス　自力ACか解説ACか、まだ理解できてないのか書く
  */
  int h,w,n;
  cin >> h >> w >> n;
  vector<int> a(n),b(n);
  rep(i,n) cin >> a[i] >> b[i];
  a = compress(a);
  b = compress(b);
  rep(i,n) printf("%d %d\n",a[i],b[i]);
  return 0;
}