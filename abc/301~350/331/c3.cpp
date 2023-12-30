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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    // 0を5にしていて1ペナ、chromeで10**6と打ち込んでコピペすると間違えない
    const int M = 1000005;
    vector<vector<int>> t(M);
    rep(i,n) t[a[i]].push_back(i);
    vector<ll> ans(n);
    ll now = 0;
    for(int x = M-1;x>=1;x--) {
      for(int i:t[x]) ans[i] = now;
      now += (ll)x * t[x].size();
    }
    rep(i,n) {
      cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}