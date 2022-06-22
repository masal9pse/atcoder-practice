#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    rep(i, n)
    {
        a[i] = vector<int>(i + 1);
        a[i][0] = 1;
        a[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    // when i = 0 => j is 0,1
    // when i = 2 => j is 0,1,2
    // when i = 3 => j is 0,1,2,3
    rep(i, n)
    {
        rep(j, i + 1)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}