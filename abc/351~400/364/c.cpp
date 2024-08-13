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
const int MI = 10e8;
const ll MLL = 1e18;



int main()
{
    int n;
    ll x,y;
    cin >> n >> x >> y;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    int sum1 = 0;
    rep(i,n) {
        
    }
    return 0;
}