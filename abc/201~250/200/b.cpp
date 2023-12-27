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
    int n,k;
    cin >> n >> k;
    ll ans = n;
    for (int i = 0; i < k; i++)
    {
        if (ans % 200 == 0)
        {
            ans /= 200;
        } else {
           string ans_str = to_string(ans);
           ans_str += "200";
           ans = stoll(ans_str);
        }
    }
    cout << ans << endl;
    return 0;
}