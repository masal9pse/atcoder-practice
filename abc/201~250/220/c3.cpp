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
   vector<int> a(n);
   rep(i,n) cin >> a[i];
   ll x;
   cin >> x;
   ll ans = 0;
   rep(i,n) ans += a[i];
   ll k = 1;
   while (ans <= x) {
     ans *= k;
     k++;
   }
   rep(i,n) {      
      if ()
   }
   return 0;
}