#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip> 
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    int h,w;
    cin >> h >> w;    
    vector a(h,vector<int>(w));
    rep(i,h) rep(j,w) cin >> a[i][j];
    vector<vector<int>> b(w,vector<int>(h));

    rep(i,w) {
        rep(j,h) {
          b[i][j] = a[j][i];
          cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}