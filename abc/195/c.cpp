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
    ll n;
    cin >> n;
    ll ans = 0;
    if (n >= 1000) ans += n - 999;
    if (n >= 1000000) ans += n - 999999;
    if (n >= 1000000000) ans += n - 999999999;
    if (n >= 1000000000000) ans += n - 999999999999;
    if (n >= 1000000000000000) ans += n - 999999999999999;
    cout << ans << endl;
    return 0;
}