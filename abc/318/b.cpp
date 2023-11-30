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
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<vector<bool>> xy(101, vector<bool>(101));
    rep(i, n)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int j = a; j < b; j++)
        {
            for (int k = c; k < d; k++)
            {
                xy[j][k] = true;
            }
        }        
    }
    int ans = 0;
    rep(i,101) rep(j,101) {
        if (xy[i][j]) ans++;
    }
    cout << ans << endl;
    return 0;
}