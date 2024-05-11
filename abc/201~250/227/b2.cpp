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
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i,j, n) for (int i = j; i < n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i,n) cin >> s[i];
    // a,bを全探索
    // 正の整数に0は含まない
    ll ans = n;
    rep(i,n) {
        bool ok = false;
        rrep(a,1,1001) rrep(b,1,1001) {
            if (s[i] == 4*a*b+3*a+3*b) ok = true;
        }
        if (ok) ans--;
    }
    cout << ans << endl;
    return 0;
}