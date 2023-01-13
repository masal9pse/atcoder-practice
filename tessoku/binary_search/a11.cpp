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
#include <queue>
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

int search(int x, int n, vector<int> a)
{
    int l = 1, r = n;

    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] > x)
            r = m - 1;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
    }
    return -1;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n+1);
    rep2(i, n) cin >> a[i];
    int ans = search(x, n, a);
    cout << ans << endl;
    return 0;
}