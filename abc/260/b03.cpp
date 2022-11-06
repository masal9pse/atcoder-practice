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
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> a(n), b(n);
    vector<bool> d(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    // p
    vector<P> mathP, englishP, totalP;
    rep(i, n)
    {
        // mathP[i].first = -a[i];
        // mathP[i].second = i;
        // mathP.push_back({-a[i],i});
        mathP.emplace_back(-a[i],i);
    }
    sort(mathP.begin(), mathP.end());
    rep(i, x)
    {
        d[mathP[i].second] = true;
    }

    rep(i, n)
    {
        // ここで判定してやれば余計なリストを作らずに済む
        if (!d[i])
        {
            // englishP.push_back({-a[i],i});
            englishP.emplace_back(-b[i],i);
            // englishP[i].second = i;
        }
    }
    sort(englishP.begin(), englishP.end());
    rep(i, y)
    {
        d[englishP[i].second] = true;
    }

    rep(i, n)
    {
        if (!d[i])
        {
            // totalP.push_back({-a[i]-b[i],i});
            totalP.emplace_back(-a[i]-b[i],i);
            // totalP[i].first = -(a[i] + b[i]);
            // totalP[i].second = i;
        }
    }
    sort(totalP.begin(), totalP.end());
    rep(i, z)
    {
        d[totalP[i].second] = true;
    }
    rep(i, n) if (d[i]) cout << i + 1 << endl;
    return 0;
}