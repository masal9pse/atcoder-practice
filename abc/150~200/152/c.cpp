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
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    int curMin = 1e9;
    int ans = 0;
    rep(i,n) {
        curMin = min(curMin,p[i]);
        if (curMin == p[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}