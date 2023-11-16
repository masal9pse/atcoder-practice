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
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n = 8;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n)
    {
        int a_i = a[i];
        int a_i2 = a[i + 1];
        if (a[i] < 100 || 675 < a[i])
        {
            cout << "No" << endl;
            return 0;
        }

        if (a[i] % 25 != 0)
        {
            cout << "No" << endl;
            return 0;
        }
        if (i == n - 1)
        {
            continue;
        }
        if (a[i] > a[i + 1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}