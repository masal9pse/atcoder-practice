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

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);

    int m = 0;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        if (s[i].length() > m) {
            m = s[i].length();
        }
    }
    vector<string> T(m, string(n, '*'));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < s[i].length(); ++j) {
            T[j][n - i - 1] = s[i][j];
        }
        reverse
    }

    for (string t : T) {
        int last = -1;
        rep(j,t.size()) {
          if (t[j] != '*') last = j;
        }
        rep(j,t.size()) {
          if (t[j] == '*' && j > last) continue;
          else cout << t[j];
        }
        cout << endl;
    }
    
    return 0;
}
