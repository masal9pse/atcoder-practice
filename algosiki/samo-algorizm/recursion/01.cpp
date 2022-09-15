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

int f(int n) {
    if(n < 1) return 0;
    return f(n-1)+n;
}

int main () {
    int n;
    cin >> n;
    cout << f(n) << endl;
}

// int f(int n)
// {
//     if (n < 1)
//         return 0;
//     return f(n - 1) + n;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << f(n) << endl;
// }

// int f(int x)
// {
//     if (x == 0)
//     {
//         return 0;
//     }

//     return f(x - 1) + x;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int ans = f(n);
//     cout << ans << endl;
//     return 0;
// }