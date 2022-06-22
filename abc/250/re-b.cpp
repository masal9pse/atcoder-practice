#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int vertical = n * a;
    int horizon = n * b;
    vector<string> s(vertical, string(horizon, '.'));
    rep(i, vertical)
    {
        rep(j, horizon)
        {
            int r = i / a;
            int c = j / b;
            if ((i + j) % 2 == 1)
            {
                s[i][j] = '#';
            }
        }
    }
    rep(i, vertical)
    {
        cout << s[i] << endl;
    }
    return 0;
}