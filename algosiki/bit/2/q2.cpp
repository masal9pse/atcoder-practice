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
    int n, v;
    cin >> n >> v;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    bool ans = false;
    for (int s = 0; s < (1 << n); s++)
    {
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            if (s & (1 << i))
            {
                total += a[i];
            }
        }
        if (total == v)
            ans = true;
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}