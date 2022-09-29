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
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi = 0;
    int aoki = 0;

    int at = x / (a + c);
    int al = x % (a + c);    
    int tt = x / (d + f);    
    int tl = x % (d + f);
    rep(i, at)
    {
        takahashi += a * b;
    }
    if (a < al)
        takahashi += a * b;
    else
        takahashi += al * b;
    rep(i, tt)
    {
        aoki += d * e;
    }
    if (d < tl)
        aoki += d * e;
    else
        aoki += tl * e;
    if (aoki < takahashi)
        cout << "Takahashi" << endl;
    else if (takahashi < aoki)
        cout << "Aoki" << endl;
    else
        cout << "Draw" << endl;
    return 0;
}