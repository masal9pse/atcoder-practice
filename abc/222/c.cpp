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

bool win(char a, char b)
{
    if (a == 'G' && b == 'C')
        return true;
    if (a == 'C' && b == 'P')
        return true;
    if (a == 'P' && b == 'G')
        return true;
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;    
    int n2 = n * 2;
    vector<string> a(n2);
    rep(i, n2) cin >> a[i];
    vector<P> d(n2);
    rep(i, n2) d[i] = P(0, i);
    rep(mi, m)
    {
        rep(i, n)
        {
            int ai = 2 * i, bi = 2 * i + 1;
            int aj = d[ai].second, bj = d[bi].second;
            if (win(a[aj][mi], a[bj][mi]))
                d[ai].first--;
            if (win(a[bj][mi], a[aj][mi]))
                d[bi].first--;
        }
        sort(d.begin(), d.end());
    }
    rep(i, n2) cout << d[i].second + 1 << endl;
    return 0;
}