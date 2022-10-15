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
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

vector<ll> memo;
ll f(ll n)
{
    if (memo[n] != -1)
        return memo[n];
    if (n == 0)
        return memo[n] = 0;
    if (n == 1)
        return memo[n] = 1;
    if (memo[n] == -1)
    {
        memo[n] = f(n - 1) + f(n - 2);
        return memo[n];
    }
}

int main()
{
    ll n;
    cin >> n;
    memo.resize(n + 1, -1);
    cout << f(n) << endl;
    return 0;
}