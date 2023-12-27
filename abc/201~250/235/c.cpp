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
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, q;
    cin >> n >> q;
    // vector<int> a(n);
    map<int, vector<int>> ma;
    // rep(i,n) cin >> a[i];
    rep(i, n)
    {
        int a;
        cin >> a;
        ma[a].push_back(i + 1);
    }
    rep(i, q)
    {
        int x, k;
        cin >> x >> k;
        // &をつけたらなぜかTLEからACになった。
        vector<int>& temp = ma[x];
        if (temp.size() < k)
            cout << -1 << endl;
        else
            cout << temp[k - 1] << endl;
    }
    return 0;
}