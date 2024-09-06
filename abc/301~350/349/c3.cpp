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

// dlrkjoyrpxugiceahgiakevsjoadmkfnkswrawkjxwcmcciabz
// BRS

// No
// 順番が考慮されていない。
int main() {
    string s,t;
    cin >> s >> t;
    int n = s.size();
    vector<bool> used(n);
    int ans = 0;
    rep(i,3) {
        rep(j,n) {
            if (used[j]) continue;
            char k = t[i]+32;
            if (s[j] == k) {
                used[j] = true;
                ans++;
                break;
            }
        }
    }
    if (ans == 2 && t[2] == 'X') cout << "Yes" << endl;
    else if (ans == 3) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
