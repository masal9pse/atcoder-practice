#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
#define ALL(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    rep(qi, q)
    {
        int x;
        cin >> x;
        int i = lower_bound(a.begin(), a.end(), x) - a.begin();
        int ans = n - i;
        cout << ans << endl;
    }
    return 0;
}