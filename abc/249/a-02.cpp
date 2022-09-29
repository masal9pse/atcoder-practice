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
    int da = 0;
    int db = 0;

    int ax = x;
    int bx = x;
    while (ax)
    {
        if (ax < x)
        {
            da += a * b;
            ax -= a;
        }
        else
        {
            da += ax * b;
            ax -= ax;
        }
         
        if (x < 0)
            break;
        ax -= c;
        if (ax < 0)
            break;
    }

    if (da < db)
        cout << "Takahashi" << endl;
    else if (db < da)
        cout << "Aoki" << endl;
    else
        cout << "Draw" << endl;
    return 0;
}