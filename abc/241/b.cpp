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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    // auto c(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    rep(i, n)
    {
        rep(j, m)
        {
            if (a[i] == b[j])
            {
                auto itEndA = remove(begin(a), end(a), a[i]);
                a.erase(itEndA,cend(a));
                auto itEnd = remove(begin(b), end(b), b[j]);                
                b.erase(itEnd, cend(b));
                int k = 3;
                break;
            }
        }
    }
    if (b.size() == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}