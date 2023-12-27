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
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    int s = 0;
    int l = 0;
    rep(i,n) s+=a[i];
    rep(i,n) {
        for (int j = n-1; j > 0; j--)
        {
            s -= b[i] + b[j];
            l += b[i];
            if (s <= 0) {
                cout << l << endl;
                return 0;                
            }
        }
    }
    return 0;
}