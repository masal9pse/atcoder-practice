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
    // vector<int> l(1e8);
    vector<int> l(1000);
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    rep(i,n) {
        l[0]++;
        for (int j = 3; j >= 0; j--)
        {
            if (l[j] >= 1) {
                l[j]--;
                l[j+a[i]]++;
                int k = 2;
            }
        }
        
    }    
    rep(i, 1000)
    {
        if (i >= 4)
        {
            ans += l[i];
            int k = 3;
        }
    }
    cout << ans << endl;
    return 0;
}