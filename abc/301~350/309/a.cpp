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
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, n) for (int i = 1; i <= n; i++)
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<string> b(n);
    rep(i,n) cin >> b[i];
    vector<string> a = b;
    rep(i,n) {
        rep(j,n) {
            // 先頭で一番左以外
            if(i == 0 && j != 0) {
                // b[i][j] = a[i][j+1];
                b.at(i).at(j) = a.at(i).at(j-1);
                continue;
            }

            // 一番先頭以外の一番右側
            if (i != 0 && j == n-1) {
                // b[i][j] = a[i-1][j];
                b.at(i).at(j) = a.at(i-1).at(j);
                continue;
            }
            
            // 一番下で、一番右の値以外
            if (i == n-1 && j != n) {
                b.at(i).at(j) = a.at(i).at(j+1);
                continue;
            }

            // 一番左で、一番下以外
            if (i != n-1 && j == 0) {
                b.at(i).at(j) = a.at(i+1).at(j);
                continue;
            }
        }
    }
    // cout << "\n" << endl;
    rep(i,n) {
        cout << b[i] << endl;
    }
    return 0;
}