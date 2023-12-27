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
    vector<int> p(n);
    for (int i = 1; i < n; i++)
    {
        cin >> p[i];
        p[i]--;
    }
    int k = n - 1;
    int ans = 0;
    while (k != 0)
    {
        k = p[k];
        ans++;
    }
    cout << ans << endl;
    return 0;
}