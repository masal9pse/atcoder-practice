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

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    map<int,int> ma;
    rep(i,n) {
        ma[a[i]%200]++;
    }
    ll ans = 0;
    for (auto a:ma)
    {
        if (a.second >= 2) {
            ans += a.second * (a.second-1)/2;            
        }
    }
    cout << ans << endl;
    return 0;
}