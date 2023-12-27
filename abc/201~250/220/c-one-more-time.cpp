#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    ll x;
    cin >> x;
    ll s = 0;
    rep(i,n) s += a[i];
    ll p = x/s;
    ll ans = p*n;
    ll now = p*s;
    rep(i,n) {
        now += a[i];
        ans ++;
        if (now > x) break;
    }
    cout << ans << endl;
    return 0;
}