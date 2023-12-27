// https://atcoder.jp/contests/arc106/tasks/arc106_b
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
using namespace std;
using ll = long long;
using P = pair<int, int>;
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
        
      実装 do m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    vector<vector<int>> g(n);
    rep(i,m) {
      int c,d;
      cin >> c >> d;
      c--,d--;
      g[c].push_back(d);
      // g[d].push_back(c);
    }


    // O(NMN)
    // rep(i,n) {
    //   rep(j,m) {
    //     // aを計算

    //     // bと同じかであるかを判定
    //     rep(i,n) {}
    //   }      
    // }
    return 0;
}