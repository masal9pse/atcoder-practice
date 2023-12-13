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

int main()
{
    /*
      
    */
    int n,s,k;
    cin >> n >> s >> k;
    int sum = 0;
    rep(i,n) {
        int p,q;
        cin >> p >> q;
        // if (p*q <= s) sum += p * q + k;
        // else sum += p * q;
        sum += p * q;
    }
    // nc,case3
    if (sum < s) sum += k; 
    cout << sum << endl;
    return 0;
}