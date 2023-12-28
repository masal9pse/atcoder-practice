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
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);
const int MI = 10e8;
const ll MLL = 1e18;

int main()
{
    /*
      問題文の理解 read 4m        
      実装方針決め plan m
        O(NK)を削減したい
        Kは答えを出力するので、削減は無理
        Nを工夫する

        分からず....、

      実装 do m
        生成AIに頼ると、細かいテストケースで落ちることが多々ある
    */
    int n,k;
    cin >> n >> k;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    map<int,int> mp;
    int ans = 0;
    int now = 0;
    rep(i,n) {
      if (mp[c[i]] == 0) now++;
      mp[c[i]]++;
      if (i >= k) {
        mp[c[i-k]]--;
        if (mp[c[i-k]] == 0) now--;
      }
      ans = max(now,ans);
    }
    cout << ans << endl;
    return 0;
}