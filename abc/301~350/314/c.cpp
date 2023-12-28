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
      問題文の理解 read
        実装時にミスが生じないためにも、ここは怠らず行う。
        脳死コピペだと実装のバグ修正で詰む
      実装方針決め plan
        生成AIを参考にするのはあり

        計算量の問題は解消
        シフト操作の実装          

      実装 do
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<int>> d(m);
    rep(i,n) {
      int a;
      cin >> a;
      d[a-1].push_back(i);
    }
    // シフト操作を行なってもjの文字数のみでしか変化はないので、
    // ここでいい。
    string ans = s;
    rep(i,m) {
      int size = d[i].size();
      // string t = s;
      // ここに書いてもいいが、変数を定義しなおすので無駄
      string t = s;
      rep(j,size) {
        // s[j+1] = t[j+1]
        // s[d[i][j]] = t[d[i][(j+size-1)]] 
        ans[d[i][(j+1)%size]] = s[d[i][j]];
        // s[d[i][(j+1)%size]] = t[d[i][j]];
        // char o = s[d[i][j]];
        int dd = 3;
      }
      int tt = 33;
    }
    cout << ans << endl;
    // cout << s << endl;
    return 0;
}