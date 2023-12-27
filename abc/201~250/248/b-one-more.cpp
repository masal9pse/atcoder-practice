#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    ll a,b,k;
    int call = 0;
    cin >> a >> b >> k;

    while (a < b)
    {
        a *= k;
        call++;
    }

    cout << call << endl;
    return 0;
}