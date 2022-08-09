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
    int n;
    cin >> n;
    int l = 4 * n - 1;
    vector<int> a(l);
    rep(i, l) cin >> a[i];
    sort(a.begin(), a.end());
    map<int, int> counter;
    for (int b : a)
    {
        counter[b]++;
    }
    for (auto c : counter)
    {
        if (c.second == 3)
        {
            cout << c.first << endl;
        }
    }

    return 0;
}