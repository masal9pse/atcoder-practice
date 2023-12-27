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

int main() {
    int n;
    cin >> n;
    vector<int> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    rep(i,n) rep(j,i) rep(k,j) {
        int a = x[j] - x[i],b = y[j] - y[i];
        int c = x[k] - x[i],d = y[k] - y[i];
        if (a * d == b*c) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}




// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> x(n), y(n);
//     rep(i, n) cin >> x[i] >> y[i];
//     rep(i, n) rep(j, i) rep(k, j)
//     {
//         int a = x[j] - x[i], b = y[j] - y[i];
//         int c = x[k] - x[i], d = y[k] - y[i];
//         if (a * d == b * c)
//         {
//             cout << "Yes" << endl;
//             return 0;
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> x(n),y(n);
//     rep(i,n) cin >> x[i] >> y[i];
//     rep(i,n) rep(j,i) rep(k,j) {
//         int a = x[j]-x[i],b=y[j]-y[i];
//         int c = x[k]-x[i],d=y[k]-y[i];
//         if (a*d == c*b) {
//             cout << "Yes" << endl;
//             return 0;
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }