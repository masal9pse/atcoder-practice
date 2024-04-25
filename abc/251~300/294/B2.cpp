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
    vector<int> a = {1,1,3,5};
    auto result = unique(a.begin(),a.end());
    a.erase(result,a.end());
    // int h, w;
    // cin >> h >> w;
    // rep(i, h)
    // {
    //     rep(j, w)
    //     {
    //         int a;
    //         cin >> a;
    //         if (a == 0)
    //             cout << '.';
    //         else
    //         {
    //             char t = a + 'A' - 1;
    //             cout << t;
    //         }
    //     }
    //     cout << endl;
    // }
    return 0;
}