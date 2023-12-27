#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    ll n;
    cin >> n;
    ll x = pow(-2,31);
    ll x2 = pow(2,31);

    if (x <= n && n < x) {
        cout << "Yes" << endl;
    }  else {
        cout << "No" << endl;
    }
    // if (pow())
    return 0;
}