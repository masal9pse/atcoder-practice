#include <bits/stdc++.h>
using ll = long long;
using namespace std;

map<int,ll> memo;

ll f(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    // if (n == 2) return 1;
    if (memo.count(n)) return memo[n];
    ll result = f(n-1) + f(n-2);
    memo[n] = result;
    return result;
}

int main() {
    int n;
    cin >> n;
    memo[0] = 0;
    memo[1] = 1;
    ll ans = f(n);
    cout << ans << endl;
    return 0;
}