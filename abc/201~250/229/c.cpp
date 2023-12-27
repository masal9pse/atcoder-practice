#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    int n,w;
    cin >> n >> w;
    vector<pair<int,int>> list(n);
    rep(i,n) {
        int a,b;
        cin >> list[i].first >> list[i].second;
    }
    sort(list.rbegin(),list.rend());
    ll ans = 0;

    rep(i,n) {
        ll x = min(w,list[i].second);
        ans += list[i].first * x;
        w -= x;
    }
    cout << ans << endl;
    return 0;
}