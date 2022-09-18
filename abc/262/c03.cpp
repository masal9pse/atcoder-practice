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



int n, m;
void output(vector<int> a)
{
    rep(i, n)
    {
        printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
    }
}
int count = 0;
void dfs(vector<int> a)
{
    if (a.size() == n)
    {
        output(a);
        return;
    }
    int sx = 1;
    if (a.size() > 0)
    {
        sx = a.back() + 1;
        int j = 3;
    }
    a.push_back(sx);
    int lls = 3;
    while (a.back() <= m)
    {
        dfs(a);
        a.back()++;
        int k = 4;
        // rep(i,a.size()) cout << a[i] << endl;
    }
    // count ++;
}

int main()
{
    cin >> n >> m;
    dfs({});
    // vector<int> a={1,3};
    // a.back()++;    
    return 0;
}