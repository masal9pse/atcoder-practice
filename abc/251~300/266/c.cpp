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
    ll n;
    cin >> n;
    ll ans = 0;    
    rep(i,998244353) {
        ans = n - i;
        rep2(j,2) {
            if (ans % 998244353 == 0) {
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}