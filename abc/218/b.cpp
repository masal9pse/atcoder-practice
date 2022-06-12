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
    int n = 26;
    vector<int> p(26);
    rep(i,n) cin >> p[i];
    string ans;
    rep(i,26) {
        ans += 'a' + (p[i]-1);
    }
    cout << ans << endl;
    return 0;
}