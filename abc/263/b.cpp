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
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 2; i <= n; i++)
    {
        cin >> p[i];
    }
    int cur = n;
    int ans = 0;
    while (true)
    {
        if (cur == 1)
            break;
        cur = p[cur];
        ans++;
    }
    cout << ans << endl;
    return 0;
}