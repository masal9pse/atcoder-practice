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
    ll ans = 0;
    rep(i,n*7) {
        int a;
        cin >> a;
        ans += a;
        if (i != 0 && (i+1) % 7 == 0) {
            cout << ans << " ";
            ans = 0;
        }
    }
    cout << endl;
    return 0;
}