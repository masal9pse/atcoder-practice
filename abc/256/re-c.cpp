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
#define rep(i, n) for (int i = 1; i <= n; i++)
#define rep2(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n = 3;
    vector<int> H(3), W(3);
    rep2(i, 3) cin >> H[i];
    rep2(i, 3) cin >> W[i];
    int ans = 0;
    rep(a, 30)
    {
        rep(b, 30)
        {
            rep(d, 30)
            {
                rep(e, 30)
                {
                    int c = H[0] - a - b;
                    int f = H[1] - d - e;
                    int g = W[0] - a - d;
                    int h = W[1] - b - e;
                    int i = W[2] - c - f;
                    int i2 = H[2] - g - h;
                    if (min({c, f, g, h, i, i2}) > 0 && i == i2)
                    {
                        ans++;
                        int k = 3;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
