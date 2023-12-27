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
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    rep(i, n) cin >> t[i];
    rep(i,n) {
        int calc = t[i+1]-t[i];
        if (calc >= 0 && calc <= d) {
            cout << t[i+1] << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}