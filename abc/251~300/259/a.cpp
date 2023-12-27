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
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;
    int zero_height;
    int ans_height;
    zero_height = t - d * x;
    if (m >= x)
    {
        ans_height = zero_height + d * x;
        cout << ans_height << endl;
    }
    else
    {
        ans_height = zero_height + d * m;
        cout << ans_height << endl;
    }
    return 0;
}