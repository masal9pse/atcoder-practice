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

int main() {   
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    ll ans = 0;
    int r = 0;
    rep(l,n) {
        // rがincrementする回数は合計で見るとmaxでn回なので、計算量は0(N+N) => O(N)
        while (r < n)
        {
          if (r > l+1 && a[r]-a[r-1] != a[r-1]-a[r-2]) break;
          //  等差数列である限りrを進める
          r++;
        }
        ans += r-l;
    }
    // なぜか7になる、なんで？
    cout << ans << endl;
    return 0;
}