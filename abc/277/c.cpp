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

// おそらくdfs
int main()
{
    int n;
    cin >> n;
    map<int,vector<int>> mp;
    rep(i,n) {
        int a,b;
        cin >> a >> b;
        mp[a].push_back(b);
    }
    ll ans = 1;
    for(auto v: mp) {
        if (v.first != 1) {
            cout << 1 << endl;
            return 0;
        }
        
        // int size = v.second.size();
        // rep(i,size) {

        // }
    }
    
    return 0;
}