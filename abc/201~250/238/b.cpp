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
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> cut;
    cut.push_back(0);
    int sum = 0;
    rep(i, n)
    {
        sum += a[i];
        cut.push_back(sum % 360);
    }
    sort(cut.begin(), cut.end());
    cut.push_back(360);
    int ans = 0;
    rep(i, n + 1)
    {
        int now = cut[i + 1] - cut[i];
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}