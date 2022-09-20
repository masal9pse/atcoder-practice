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
    int n, s, q;
    cin >> n >> s >> q;
    rep(i, q)
    {
        int t, x;
        cin >> t >> x;
        if (t == 0)
        {
            s |= 1 << x;
        }
        else
        {
            if (s & (1 << x))
            {
                cout << "on" << endl;
            }
            else
            {
                cout << "off" << endl;
            }
        }
    }
    return 0;
}