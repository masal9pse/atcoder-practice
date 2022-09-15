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

int f(int a, int n)
{
    if (n < a)
        return 0;
    return f(a, n - 1) + n;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << f(a, b) << endl;
}

// int f(int a,int b) {
//     if (b < a) return 0;
//     return f(a,b-1) + b;
// }

// int main() {
//     int a,b;
//     cin >> a >> b;
//     cout << f(a,b) << endl;
//     return 0;
// }

// int f(int a, int b)
// {
//     if (b < a)
//         return 0;
//     return b + f(a, b - 1);
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int ans = f(a, b);
//     cout << ans << endl;
//     return 0;
// }