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
    int n, x;
    cin >> n >> x;
    int ans = 10e8;
    vector<int> a(n-1);
    rep(i, n - 1) cin >> a[i];
    for (int i = 0; i <= 100; i++)
    {
        vector<int> b = a;
        b.push_back(i);
        sort(b.begin(),b.end());
        int sum = 0;
        rep(j, n)
        {
            if (j != 0 && j != n-1) sum += b[j];
        }
        if (x <= sum)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}