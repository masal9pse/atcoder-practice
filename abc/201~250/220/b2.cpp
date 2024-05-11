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

ll f(ll a,int k) {
    int count = 0;
    ll ans = 0;
    while (a)
    {
       ll t = 1;
       rep(i,count) t *= k; 
       ans += (ll)(a%10)*t;
       a/=10;
       count++;
    }
    return ans;
}
// 2
// 11000011010011010 11000011010011110
// ミスった時はllとか、>に=つけるときとかでケアレスミス多い
int main()
{
   ll k,a,b;
   cin >> k;
   cin >> a >> b;
   ll ans = 0;
   ll a2 = f(a,k);
   ll b2 = f(b,k);
   cout << a2*b2 << endl;
   return 0;
}