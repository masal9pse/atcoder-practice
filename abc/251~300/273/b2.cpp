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
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    ll x;
    int k;
    cin >> x >> k;
    ll ans = 0;
    ll i = 1;
    while (x)
    {
        int t = x%10;
        x/=10;
        if (t >= 5) x++,t = 0;
        else t = 0;
        // 00のケースの対応が難しい。
        ans += (ll)i * t;
        i*=10;
    }
    cout << ans << endl;
}