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
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<int> a(n*3);
    rep(i,n*3) cin >> a[i];
    vector<vector<int>> ans(n);
    rep(i,n*3) {
        ans[a[i]-1].push_back(i);
    }
    vector<pair<int,int>> ans2(n);
    rep(i,n) {
        ans2[i] = make_pair(ans[i][1],i+1);
    }
    sort(ans2.begin(),ans2.end());
    rep(i,n) {
        cout << ans2[i].second << " ";
    }
    cout << endl;
    return 0;
}