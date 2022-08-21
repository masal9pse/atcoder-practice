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
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)

int main()
{
    int n, q;
    cin >> n;
    vector<int> s(n);
    rep(i, n) cin >> s[i];
    cin >> q;
    vector<int> t(q);
    rep(i, q) cin >> t[i];
    int ans = 0;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    rep(i, q)
    {
        int left = 0;
        int right = n - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            int a = 3;
            if (t[i] == s[mid])
            {
                ans++;
                break;
            }
            else if (s[mid] < t[i])
            {
                // left = mid++;するとmid変数にも+1されてしまうので注意
                left = mid + 1;
                int c = 3;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}