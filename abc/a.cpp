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
const int MI = 10e8;
const ll MLL = 1e18;

ll findMaxK(ll N) {
    ll k = static_cast<ll>(log2(N));
    return k;
}

int main()
{
    /*
      pythonでも通らないか
    */
    ll n; 
    cin >> n;
    ll c = findMaxK(n);
    cout << c << endl;
    return 0;
}