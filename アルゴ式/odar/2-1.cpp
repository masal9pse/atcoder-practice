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
const double PI = acos(-1);

// int main()
// {
//     int n;    
//     cin >> n;
//     vector<int> a(n);
//     rep(i,n) cin >> a[i];
//     int ans = 0;
//     rep(i,n) rep(j,n){
//         ans = max(ans,a[i] - a[j]);
//     }
//     cout << ans << endl;
//     return 0;
// }
int main()
{
    int n;    
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 0;
    sort(a.begin(),a.end());
    ans = a[n-1] - a[0];
    cout << ans << endl;
    return 0;
}