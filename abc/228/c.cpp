#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> points(n);
    rep(i, n)
    {
        rep(j, 3)
        {
            int p;
            cin >> p;
            points[i] += p;
            int k = 3;
        }
    }
    vector<int> d;
    d = points;    
    sort(d.rbegin(), d.rend());
    int mx = d[k-1];
    rep(i,n) {
        if (points[i]+300 >= mx) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}