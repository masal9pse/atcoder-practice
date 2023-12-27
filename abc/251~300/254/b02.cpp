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
    vector<vector<int>> a(n);  
    rep(i,n) {
        a[i] = vector<int>(i+1);
        a[i][0] = 1;
        a[i][i] = 1;
        for (int j = 1; j <= i; j++)
        {
            a[i][j] = a[i-1][j-1]+a[i-1][j];
        }
        rep(j,i+1) {
            cout << a[i][j] << ' '; 
        }
        cout << endl;
    }
    return 0;
}