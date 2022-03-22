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
    int x;
    cin >> x;
    ll s;
    rep(i,n) s += a[i];
    ll p = x/s;
    ll ans = p*n; // 2*3 = 6 現在のカウント数
    ll now = p*s; // 2*10 = 20 現在の値
    rep(i,n) {
        now += a[i];
        ans++;
        if (now > x) break;
    }
    
    // cout << ans << endl;
    // cout << now << endl;

    int c = 3;
    return 0;
}