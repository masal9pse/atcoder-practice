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
    vector<int> x(n * 5);
    rep(i,n*5) cin >> x[i];
    sort(x.begin(),x.end());
    rep(i,n) {
        x.erase(x.begin());
        x.pop_back();
        int k = 3;
    }
    ll ans = 0;
    rep(i,x.size()) {
        ans += x[i];
    }
    printf("%.10f\n", (double)ans / x.size());
    return 0;
}