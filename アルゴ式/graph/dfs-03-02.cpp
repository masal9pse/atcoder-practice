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
#include <queue>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vs = vector<string>;
using mi = map<int, int>;
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

void rec(int v,vector<vector<int>> &g,vector<bool> &seen) {
    seen[v] = true;
    cout << v << " ";    
    for(auto v2: g[v]) {
        if (seen[v2]) continue;
        rec(v2,g,seen);
    }
    return;
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i,n) {
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);        
    }
    rep(v,n) {
        sort(g[v].begin(),g[v].end());
    }
    vector<bool> seen(n,false);
    rec(0,g,seen);
    return 0;
}