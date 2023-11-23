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
    int r, c;
    cin >> r >> c;
    vector<string> b(r);
    rep(i, r) cin >> b[i];
    vector<string> b_copy = b;    
    rep(i, r) rep(j, c)
    {
        if (b_copy[i][j] != '.' && b_copy[i][j] != '#')
        {            
            int bomb = stoi(string(1,b_copy[i][j]));
            rep(k, r) rep(l, c)
            {
                int d = abs((i + 1) - (k + 1)) + abs((j + 1) - (l + 1));
                if (d <= bomb)
                {
                    b[k][l] = '.';
                    int lll = 3;
                }
            }
            int ccc = 2;
        }
    }
    cout << "\n"
         << endl;
    rep(i, r)
    {
        cout << b[i] << endl;
    }
    return 0;
}