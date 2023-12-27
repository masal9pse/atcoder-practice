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
#include <cmath>
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

// vector<int> round_n(int n, int i)
ll round_n(ll n, int i)
{
    vector<ll> a;
    // 0になったらfalseになる。
    // こういうvectorにいちいち直すのやめよ。
    while (n)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    int size = a.size();    
    if (a[i] >= 5)
    {
        a[i] = 0;
        // 次の次の数が9のときに
        a[i + 1]++;
    }
    ll ans = 0;
    rep(i, size)
    {
        ans += a[i] * pow(10, i);
        int k = 3;
    }
    return ans;
}

bool check(ll x,ll k) {
    vector<ll> a;
    while (x)
    {
        a.push_back(x % 10);
        x /= 10;
    }
    int size = a.size();
    if (size < k) {
        return true;
    }
    return false;
}
int main()
{
    ll x, k;
    cin >> x >> k;
    if (check(x,k)) {
        cout << 0 << endl;
        return 0;
    }
    rep(i, k)
    {
        x = round_n(x, i);
    }
    cout << x << endl;
    return 0;
}