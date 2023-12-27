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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k);
    vector<int> l(q);
    rep(i, k)
    {
        cin >> a[i];
        a[i]--;
    }

    rep(i, q)
    {
        cin >> l[i];
        l[i]--;
    }
    rep(i, q)
    {
        rep(j, k)
        {
            if (j == l[i])
            {
                if (a[j] + 1 != a[j + 1] && a[j] != n - 1)
                {
                    a[j]++;
                    int sss = 3;
                }
            }
        }
        sort(a.begin(), a.end());
    }
    rep(i, k)
    {
        cout << a[i] + 1 << " ";
    }
    cout << endl;
    return 0;
}