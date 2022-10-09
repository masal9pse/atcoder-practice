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
    // vector<vector<int>> joined(m);
    vector<int> k_list(m);

    rep(i, m)
    {
        int k;
        cin >> k;
        // k_list[i] = k;
        vector joined(k,vector<int>(k)); 
        rep(j, k)
        {
            int x;
            cin >> x;
            x--;
            rep(j,i) {

            }        
        }
        joined[i].push_back(0);
    }
    return 0;
}