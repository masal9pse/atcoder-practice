#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<double> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    double t = 0;
    rep(i,n) t += a[i] / b[i];
    t /= 2;
    double ans = 0;
    rep(i,n) {
        int nt = a[i] / b[i];
        if (nt > t) {
            ans += b[i] * t;
            break;
        }
        ans += a[i];
        t -= nt;
    }
    cout << ans << endl;
    return 0;
}