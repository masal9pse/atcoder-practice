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
    int t;
    cin >> t;
    int k = pow(2,3);
    int ft = pow(t,2) + 2 * t + 3;
    int ftt = ft + t;
    int fftt = pow(ftt,2) + 2 * ftt + 3;
    int fft2 = pow(ft,2) + 2 * ft + 3;
    int manaka = fftt + fft2;
    int ans = pow(manaka,2) + 2 * manaka + 3;
    cout << ans << endl;  
    return 0;
}