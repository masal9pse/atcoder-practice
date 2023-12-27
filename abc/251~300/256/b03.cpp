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
    int ans = 0;
    vector<bool> d(4);
    rep(i, n)
    {
        int a;
        cin >> a;
        d[0] = true;
        for (int j = 3; j >= 0; j--)
        {
            if (d[j])
            {
                d[j] = false;
                if (j + a < 4)
                    d[j + a] = true;
                else
                    ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}