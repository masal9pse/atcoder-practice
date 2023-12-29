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
const double PI = acos(-1);

int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    rep2(x, n)
    {
        // rep2(j, m - i)
        rep2(y, n)
        {
            int max_z = max(n,m-x-y);
            l
            // if (ans <= m)
            //     count++;
        }
    }
    cout << count << endl;
    return 0;
}