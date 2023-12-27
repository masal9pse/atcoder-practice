#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip> 
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> xy(n);
    rep(i,n) {        
        cin >> xy[i].first;
        cin >> xy[i].second;
    }
    double ans = 0;
    rep(i, n)
    { 
        rep(j, i)
        {
            double yukurid = pow(xy[i].first - xy[j].first,2) + pow(xy[i].second - xy[j].second,2);
            double yukurid2 = sqrt(yukurid);            
            if (yukurid2 > ans) {
                ans = yukurid2;
            } else if (ans == 0) {
                ans = yukurid2;
            }
        }
    }
    // cout << ans << endl;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}