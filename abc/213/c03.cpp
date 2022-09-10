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

vector<int> compress(vector<int> a){
    int n = a.size();
    map<int,int> mp;
    int id = 1;
    rep(i,n) mp[a[i]] = 0;
    for (auto& p:mp) p.second = id++;
    rep(i,n) a[i] = mp[a[i]];
    return a;
}

int main()
{
    int h,w,n;
    cin >> h >> w >> n;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    a = compress(a);
    b = compress(b);
    rep(i,n) printf("%d %d\n",a[i],b[i]);
    return 0;
}