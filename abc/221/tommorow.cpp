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
// using P = pair<int, int>;
using P = pair<string, string>;
#define rep(i, n) for (int i = 0; i < n; i++)

// 3122
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    while (n)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    sort(a.begin(), a.end());
    int k = a.size();
    int ans = 0;
    do
    {
        for (int i = 1; i <= k - 1; i++)
        {
            // ここから実装しよう。
            int l = 0, r = 0;
            rep(j, i)
            {
                l = l * 10 + a[j];
                int k = 3;
            }
            for (int j = i; j < k; j++)
            {
                r = r * 10 + a[j];
                int c = 3;
            }
            ans = max(ans, l * r);
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << ans << endl;
    return 0;
}