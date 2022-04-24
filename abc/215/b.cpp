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
    double k = 0;
    double temp_ans = 2;
    while (true)
    {
        double ans = 2;
        ans = pow(ans,k);
        if (ans > n) {
            cout << k-1 << endl;
            break;
        }
        k ++;
    }
    return 0;
}