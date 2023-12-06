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
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> ruiseki(n+1);
    rep(i,n) ruiseki[i+1] = ruiseki[i] + a[i];erff
    vector<pair<int,int>> d;
    rep(i,n) {
        d.push_back({a[i],i});
    }
    sort(d.begin(),d.end());
    int ans = 0;
    rep(i,n) {

    }
    return 0;
}