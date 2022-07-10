#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    vector<double> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    int li = 0,ri = n-1;
    // 今の同線でなんcm燃えているかを定義する変数
    double lx = 0,rx = 0;
    double ans = 0;    
    while (li < ri)
    {
        double ali = a[li];
        double bli = b[li];
        double ari = a[ri];
        double bri = b[ri];
        double lt = (ali-lx) / bli; // ?
        double rt = (ari-rx) / bri;
        if (lt < rt) {
            // ?
            // ans += a[li]-lx;
            ans += bli*lt; // ?
            lx = 0; rx += bri*lt;
            li++;
            int k = 3;
        } else {
            ans += bli*rt;
            rx = 0;lx += bli*rt;
            ri --;
            int k = 3;
        }
    }
    ans += (a[li]-lx-rx)/2;// ?
    printf("%.10f\n",ans);
    return 0;
}