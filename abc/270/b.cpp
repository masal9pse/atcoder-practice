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

bool f(int a, int b, int p)
{
    if (b < a)
        swap(a, b);
    return a < p && p < b;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (f(0, x, y))
    {
        if (f(0, z, y))
        {
            cout << -1 << endl;
        }
        else
        {
            int ans = abs(z) + abs(x - z);
            cout << ans << endl;
        }
    }
    else
    {
        cout << abs(x) << endl;
    }
}

// bool f(int a,int b,int y) {
//   if (b < a) {
//     swap(a,b);
//   }
//   return a < y && y < b;
// }

// int main() {
//     int x,y,z;
//     cin >> x >> y >> z;
//     int ans = 0;
//     if (f(0,x,y)) {
//         // zの間にyが含まれるかどうか？
//         if (f(0,z,y)) {
//             cout << -1 << endl;
//             return 0;
//         } else {
//             ans = abs(z) + abs(z-x);
//             cout << ans << endl;
//         }
//     } else {
//         cout << abs(x) << endl;
//         return 0;
//     }
// }

// bool f(int a, int b, int y)
// {
//     if (b < a) {
//         swap(a,b);
//     }
//     return a < y && y < b;
// }

// int main()
// {
//     int x, y, z;
//     cin >> x >> y >> z;
//     int ans = 0;
//     if (f(0, x, y))
//     {
//         if (f(0, z, y))
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             ans = abs(z) + abs(z-x);
//         }
//     }
//     else
//     {
//         cout << x << endl;
//     }
//     return 0;
// }

// bool f(int a, int b, int y)
// {
//     if (b < a)
//         swap(a, b);
//     return a < y && y < b;
// }

// int main()
// {
//     int x, y, z;
//     cin >> x >> y >> z;
//     int ans = -1;
//     if (f(0, x, y))
//     {
//         if (f(0, z, y))
//             ans = -1;
//         else
//             ans = abs(z) + abs(z - x);
//     }
//     else
//     {
//         ans = abs(x);
//     }
//     cout << ans << endl;
// }

// // int main()
// // {
// //     int x, y, z;
// //     cin >> x >> y >> z;
// //     int ans = 0;
// //     if (y < 0)
// //     {
// //         if (z <= y && y <= x)
// //         {
// //             cout << x << endl;
// //             return 0;
// //         }
// //         if (y < z)
// //         {
// //             cout << -1 << endl;
// //         }
// //     }
// //     else
// //     {
// //         if (x < y && y <= z && z >= 0)
// //         {
// //             ans = abs(z) * 2 + abs(x);
// //             return 0;
// //         }
// //         if (y < x) {
// //             cout << abs(x) << endl;
// //             return 0;
// //         }
// //         if (x < y && y <= z && z < 0)
// //         {
// //             cout << abs(x) << endl;
// //         }
// //         if (x <= z && z <= y)
// //         {
// //             cout << -1 << endl;
// //             return 0;
// //         }
// //     }
// //     // ケース３
// //     // if (z > y && z >= 0) {
// //     //     cout << - 1 << endl;
// //     //     return 0;
// //     // }
// //     // // ケース１
// //     // if (z > y) {
// //     //     cout << x << endl;
// //     //     return 0;
// //     // }
// //     // // ケース２
// //     // if (z < y) {
// //     //     ans = abs(z) * 2 + abs(x);
// //     //     cout << ans << endl;
// //     //     return 0;
// //     // }
// //     return 0;
// // }