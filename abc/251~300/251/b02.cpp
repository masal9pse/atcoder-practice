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
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<bool> ans(w + 1);
    int count = 0;
    rep(i, n)
    {
        if (a[i] <= w)
            ans[a[i]] = true;
    }
    rep(i, n) rep(j, i)
    {
        int ab = a[i] + a[j];
        if (ab <= w)
            ans[ab] = true;
    }

    rep(i, n) rep(j, i) rep(k, j)
    {
        int abc = a[i] + a[j] + a[k];
        if (abc <= w)
        {
            ans[abc] = true;
        }
    }
    rep(i,w+1) {
        if (ans[i]) count++;
    }
    cout << count << endl;
    return 0;
}