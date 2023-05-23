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
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    while (1)
    {
        bool ok = true;
        rep(i, a.size() - 1)
        {
            if (abs(a[i] - a[i + 1]) > 1)
            {
                ok = false;
                int j = i + 1,r = a[i+1];
                if (a[i] < a[i+1]) {
                    for (int x = a[i]+1; x < r; x++)
                    {
                        a.insert(a.begin() + j, x);
                        j++;
                    }        
                } else {
                    int j = i + 1,r = a[i+1];
                    for (int x = a[i]-1; x > r ; x--)
                    {
                        a.insert(a.begin() + j, x);
                        j++;
                    }
                    
                }
            }
        }
        if (ok)
            break;
    }
    rep(i,a.size()) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}