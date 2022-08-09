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

int main()
{
    ll n;
    cin >> n;

    ll t = 1;
    int ans = 0;
    while (true)
    {
        string t_str = to_string(t) + to_string(t);
        if (stoll(t_str) <= n)
        {
            ans++;
        }
        else
        {
            break;
        }
        t++;
    }
    cout << ans << endl;
    return 0;
}