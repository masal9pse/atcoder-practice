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
    ll val = 1;
    rep(i,63)
    {
        // 先に比較すれば2^0乗の計算ができている。
        if (val > n) {
            cout << i-1 << endl;
            break;
        }
        // これで階乗が求まる。
        val *= 2;
    }
    return 0;
}