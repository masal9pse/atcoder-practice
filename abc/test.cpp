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
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n, m,p;
    cin >> n >> m >> p;
    int full_moon_day = m;
    int ans = 0;
    int day = 0;
    while (full_moon_day <= n)
    {
        full_moon_day = m + p * day;
        if (full_moon_day <= n) ans++;
        day++;
    }
    cout << ans << endl;
    return 0;
}