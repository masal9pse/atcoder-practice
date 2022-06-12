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
    ll a,b;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (a % 10 + b % 10 >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
        a = a / 10;
        b = b / 10;
    }
    cout << "Easy" << endl;
    return 0;
}