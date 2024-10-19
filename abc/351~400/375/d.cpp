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
const int MI = 1e8;
const ll MLL = 1e18;

int main() {
    string s;
    cin >> s;
    vector<int> lcnt(26);
    vector<int> rcnt(26);
    int n = s.size();
    // 不要な分岐を減らすためにまずjを含めたrcntを持っておく。
    rep(i,n) rcnt[s[i]-'A']++;
    ll ans = 0;
    rep(j,n) {
      // 真ん中s[j]は計算したくないのでまず引く。
      rcnt[s[j]-'A']--;
      // 回文個数計算
      rep(c,26) ans += (ll)rcnt[c] * lcnt[c];
      // jを動かすことによってiの文字の個数を更新する。
      lcnt[s[j]-'A']++;
    }
    cout << ans << endl;
    return 0;
}
