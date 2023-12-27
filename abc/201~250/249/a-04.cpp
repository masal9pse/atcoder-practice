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

int calcMater(int a, int b, int c, int x)
{
    int p = x / (a + c);
    int m = x % (a + c);
    // int s = (a + min(a, m)) * b;
    int s = 0;
    rep(i,p) {
        s+= a * b;
    }
    if (a < m) {
        s += a * b;
    } else if (m <= a) {
        s += m * b;
    }    
    return s;
}

int main()
{
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi = calcMater(a, b, c, x);
    int aoki = calcMater(d, e, f, x);
    if (aoki < takahashi)
        cout << "Takahashi" << endl;
    else if (takahashi < aoki)
        cout << "Aoki" << endl;
    else
        cout << "Draw" << endl;
    return 0;
}