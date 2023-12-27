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
    map<int,int> mp;
    rep(i,n) {
        int a;
        cin >> a;
        mp[a]++;
    }
    int ans = 0;
    for (auto p : mp) {
        ans += p.second / 2;
    }
    cout << ans << endl;
    return 0;
}