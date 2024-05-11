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
const int MI = 1001001000;
const ll MLL = 1e18;

// 目標はbinary_searchのlower_boundを使ってこの問題を解く
/*
 方針はaiを固定して、aiと最も近い値を求める。
 2分探索を使用する。
 O(NlogM)
*/
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    sort(all(a));
    sort(all(b));
    int ans = 1001001000;
    rep(i,n) {
        int j = lower_bound(all(b),a[i])-b.begin();
        // lower_boundでa[i]と近い値を求めるにはどうすればいいか。。。
        // 配列外参照を起こさないのであれば、どちらも計算する。
        if (j < m) ans = min(ans,abs(a[i]-b[j]));
        if (0 <= j-1)ans = min(ans,abs(a[i]-b[j-1]));        
    }
    cout << ans << endl;
    return 0;
}