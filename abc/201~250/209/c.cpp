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
      問題文の理解 read 6m
      実装方針決め plan m
       ciが全て異なるケースがわからない
       それをどうするか解説見る
      実装 do m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int n;
    cin >> n;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    sort(c.begin(),c.end());    
    ll ans = 1;
    rep(i,n) {
      // 計算のたびにmodしないとllも超えてしまう
      int d = c[i]-i;
      ans = ((ll)ans * (c[i]-i)) % 1000000007;
    }
    cout << ans << endl;
    return 0;
}