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
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main() {
    int n,m;
    cin >> n >> m;
    vector d(n,vector<bool>(n));

    rep(mi,m) {
        int k;
        cin >> k;
        vector<int> x(k);
        rep(i,k) cin >> x[i];
        rep(i,k) --x[i];
        rep(i,k) rep(j,k) d[x[i]][x[j]] = true;
    }
    rep(i,n) rep(j,n) {
        if (!d[i][j]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     vector<vector<int>> d(n,vector<bool>(n));
//     rep(mi,m) {
//         int k;
//         cin >> k;
//         vector<int> x(k);
//         rep(i,k) {
//             cin >> k[j];            
//         }
//         rep(i,k) --x[i];
//         rep(i,k) rep(j,k) d[x[i]][x[j]] = true;
//     }
//     rep(i,n) rep(j,k) {
//         if (!d[i][j]) {
//             cout << "No" << endl;
//             return 0;
//         }
//     }
//     cout << "Yes" << endl;
//     return 0;
// }