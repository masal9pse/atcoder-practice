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
    int k = 0;
    ll val = 1;
    while (true)
    {
        if (val > n) {
            cout << k-1 << endl;
            break;
        }
        // これで階乗が求まる。
        val *= 2;
        k ++;
    }
    return 0;
}3