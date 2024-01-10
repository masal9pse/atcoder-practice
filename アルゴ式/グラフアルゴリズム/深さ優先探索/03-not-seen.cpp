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
using namespace std;
using ll = long long;
using P = pair<int, int>;
using G = vector<vector<int>>;
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
        実装時にミスが生じないためにも、ここは怠らず行う。
        脳死コピペだと実装のバグ修正で詰む
      実装方針決め plan m
        生成AIを参考にするのはあり
      実装 do m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int n;
    cin >> n;
    G to(n);
    rep(i,n-1) {
      int a,b;
      cin >> a >> b;
      to[a].push_back(b);
      to[b].push_back(a);
    }
    // rep(i,n) sort(to[i].begin(),to[i].end());
    int ans = -1;
    auto dfs = [&](auto f,int v,int p=-1,int h = 0) -> void {      
      h++;
      for(int u:to[v]) {
        // サイクルの場合、2=>0に戻るのでその際、0を踏んだ情報がなくなってしまう。
        // この場合はseenを使わないと無理だな
        if (u == p) continue;
        f(f,u,v,h);
        ans = max(ans,h);
      }
    };
    dfs(dfs,0);
    cout << ans << endl;
    return 0;
}