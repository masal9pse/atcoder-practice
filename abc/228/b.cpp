#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i],a[i]--;
    int ans = 0;
    x--;
    vector<bool> used(n);
    while (!used[x])
    {
        used[x] = true;
        x = a[x];
        ans++;
    }
    cout << ans << endl;
    return 0;
}