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
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<int> p(n*2+2);
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        p[i*2] = a;
        p[i*2+1] = a;
    }
    vector<int> ans(n*2+2);
    for (int i = 2; i <= n*2+1; i++)
    {
        ans[i] = ans[p[i]] + 1;
    }
    for (int i = 1; i <= n*2+1; i++)
    {
       cout << ans[i] << endl;
    }    
    return 0;
}