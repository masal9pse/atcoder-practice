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
#define rep2(i, n) for (int i = 1; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;    
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.rbegin(),a.rend());
    string ans;
    rep(i,3) {
        ans += to_string(a[i]);
    }
    cout << ans << endl;
    return 0;
}

最小公倍数
