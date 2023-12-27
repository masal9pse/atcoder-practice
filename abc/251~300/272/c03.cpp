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
    int n;
    cin >> n;
    vector<int> odd, even;
    rep(i, n)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
            even.push_back(a);
        if (a % 2 == 1)
            odd.push_back(a);
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());
    int ans = -1;
    if (odd.size() >= 2)
    {
        ans = max(odd[0] + odd[1], ans);
    }
    if (even.size() >= 2)
    {
        ans = max(even[0] + even[1], ans);
    }
    cout << ans << endl;
    return 0;
}