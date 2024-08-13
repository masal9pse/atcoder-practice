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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    auto f = [&](int index,int key) -> bool {
        return b[index] >= key;
    };
    int ans = 1e9+1;
    sort(b.begin(),b.end());
    rep(i,n) {
        int left = -1,right = b.size();
        while (right - left > 1)
        {
            int mid = (left + right) / 2;
            if (f(mid,a[i])) right = mid;
            else left = mid;
        }
        int t = 3;
        if (left >= 0) ans = min(ans,abs(a[i]-b[left])); 
        if (right < b.size()) ans = min(ans,abs(a[i]-b[right])); 
    }
    cout << ans << endl;
    return 0;
}