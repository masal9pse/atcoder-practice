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
    vector<int> a(n);
    vector<bool> flag(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    while (1)
    {
        if (!flag[ans] && ans == a[ans] - 1)
        {
            ans++;
            flag[ans] = true;
        }
        else
        {
            if (!flag[a.size() - 1] && !flag[a.size() - 2])
            {
                flag[a.size() - 1] = true;
                flag[a.size() - 2] = true;
            } else {
                cout << ans << endl;
                return 0;
            }
        }
    }
    // cout << ans << endl;
    return 0;
}