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
    int n;
    cin >> n;

    // 各種類のゴミの周期と余りを格納
    vector<int> q(n), r(n);
    rep(i,n) cin >> q[i] >> r[i];

    int Q;
    cin >> Q;

    rep(j,Q) {
        ll t, d;
        cin >> t >> d;
        t--;

        ll qi = q[t];
        ll ri = r[t];
                
        ll current = d % qi;

        ll jump = (ri - current + qi) % qi;
        
        d += jump;
                
        cout << d << endl;
    }
    return 0;
}
