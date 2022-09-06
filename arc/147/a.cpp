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
    
    rep(i,n) {
        int min_n;
        int max_n;
        min_n = min(a[i],min_n);
        max_n = max(a[i],max_n);
        int n_mod;
        n_mod = max_n % min_n;
        a[i] = n_mod;
        int k = 3;
    }
    return 0;
}