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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, n)
    {
        int b = 2 * a[i];
        int c = 2 * a[i] + 1;
        int ans = 0;
        int k = b - 1;
        while (k != 0)
        {
            k = b;
            ans++;
        }
        int ans2 = 0;
        int k2 = c - 1;
        while (k2 != 0)
        {
            k2 = ;
            ans2++;
        }
        cout << ans << endl;
        cout << ans2 << endl;
    }
    return 0;
}