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
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    vector<bool> eated(n);
     // この状態から穴埋めする。
    rep(i, n)
    {
        bool ok = false;
        rep(j, m)
        {
            if (a[i] == b[j] && !eated[i]) {
                eated[i] = true;
                ok = true;
                break;
            }
        }
        if (!ok) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}