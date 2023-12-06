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
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    vector<int> a = {a1, a2, a3};
    int ans = 0;
    int n = 3;
    sort(a.begin(), a.end());
    rep(i, n)
    {

        if (i == 0)
        {
            continue;
        }
        ans += abs(a[i] - a[i-1]);
    }
    cout << ans << endl;
    return 0;
}