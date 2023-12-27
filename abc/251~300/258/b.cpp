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
    vector<string> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> a3(n);
    rep(i, n)
    {
        a3[i] = stoi(a[i]);
    }
    vector<vector<int>> a2(n);
    rep(i, n)
    {
        int size = a[i].size();
        rep(j, size)
        {
            int l = stoi(string(1, a[i][j]));
            a2[i].push_back(l);
        }
    }    
    // int max_n = 0;
    // int max_i = 0;
    // int max_j = 0;
    // rep(i,n) {
    //     int size = a[i].size();
    //     rep(j,size) {
    //         if (max_n < a2[i][j]) {
    //             max_i = i;
    //             max_j = j;
    //         }
    //         max_n = max(max_n,a2[i][j]);                        
    //     }
    // }
    return 0;
}