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
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n = 64;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll ans = 0;
    int tmp = 0;
    rep(i, n)
    {
        ans = pow(a[i],2);   
        // if (i == 0)
        // {
        //     tmp = 1;
        //     ans += tmp;
        // }
        // else
        // {

        //     ans += tmp;
        // }
    }
    cout << ans << endl;
    return 0;
}