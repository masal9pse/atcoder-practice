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

int main()
{
    int n,p,q,r,s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    rep(i,q-p+1) {
        int first_i = p+i;
        int last_i = r+i;
        swap(a[first_i-1],a[last_i-1]);
    }
    
    for(auto v:a) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}