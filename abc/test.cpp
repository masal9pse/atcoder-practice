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

int main()
{
    int n, m;
    cin >> n >> m;
    // vector x_list(m,vector);

    vector<vector<int>> x_list(m);
    vector<vector<int>> joined(m);
    vector<int> k_list(m);

    rep(i, m)
    {
        int k;
        cin >> k;
        k_list[i] = k;
        rep(j, k)
        {
            int x;
            cin >> x;
            x--;
            x_list[i].push_back(x);
            joined[i].push_back(0);
            // joined[i][x_list[i][j]]++;
            int k = 3;
        }
        joined[i].push_back(0);
    }

    rep(i, m)
    {
        rep(j, k_list[i])
        {
            // joined[i][x_list[i][j]]++;
            joined[i][x_list[i][j]]++;
            joined[x_list[i][j]][j]++;
            int k = 3;
        }
    }

    rep(i, m)
    {
        rep(j, k_list[i])
        {
            //   joined[i][x_list[i][j]]++;
            if (i != j && joined[i][j] != 1)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}