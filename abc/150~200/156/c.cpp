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

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i, n) cin >> x[i];
    vector<int> a(100);
    rep(i, 100)
    {
        int tmp = 0;
        rep(j, n)
        {
            tmp += pow(x[j] - (i + 1), 2);
        }
        a[i] = tmp;
    }
    int ans = 10e8;
    rep(i, 100) ans = min(ans, a[i]);
    cout << ans << endl;
    return 0;
}