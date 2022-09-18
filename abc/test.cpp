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
    vector<string> g(10);
    rep(i, 10)
    {
        string s;
        cin >> s;
        g[i] = s;
    }
    int a = 0, b = 0, c = 0, d = 0;
    rep(i, 10) rep(j, 10)
    {
        if (g[i][j] == '#' && a == 0)
        {
            a = i+1;
            b = i+1;
            // c = j;
        }
        else if (g[i][j] == '#')
        {
            b = i+1;
            // d = j;
        }
        if (g[i][j] == '#' && c == 0)
        {
            c = j+1;
            d = j+1;
        }
        else if (g[i][j] == '#')
        {
            d = j+1;
        }
    }
    cout << a  << ' ' << b << endl;
    cout << c  << ' ' << d << endl;
    return 0;
}