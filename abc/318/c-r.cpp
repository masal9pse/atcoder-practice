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
      途中で別の問題にいく場合は、終わったものファイルにrpdのいずれかをつける。
      問題文の理解 r 6m done
        実装時にミスが生じないためにも、ここは怠らず行う。
        脳死コピペだと実装のバグ修正で詰む
      実装方針決め p 40m
        生成AIを参考にするのはあり

        1. 普通にシミュレーション
          文字列を操作していくと実質計算量がかかるはず。前にTLEになった気がする
        2. 
          分からんから一旦、シフト操作の練習をする。
      実装 d
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
      解説AC
      写経解説AC
    */
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<vector<int>> d(m);
    rep(i,n) {
      d[a[i]-1].push_back(i);
    }
    // rep(i,m) {
    //   char c;
    //   rep(j,n) {
    //     if (i+1 == a[j]) {
    //       s[j] = c;
    //       c = s[j];
    //     }
    //   }
    // }
    rep(i,m) {
      char c;
      rep(j,d[i].size()) {
        if (j == 0) {
         c = s[d[i][j]];  
         continue;        
        }
        int o = d[i][j];
        s[d[i][j]] = c;
        c = s[d[i][j]];
        int o2= 3;
      }
    } 
    return 0;
}