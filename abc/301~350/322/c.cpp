// 解説AC
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<bool> fire_works(n);
    rep(i,m) {
        int a;
        cin >> a;
        a--;
        fire_works[a] = true;
    }
    int passed_day = 0;
    vector<int> ans(n);
    // for (int i = n-1; i >= 0; i--)
    // {
    //     if (fire_works[i]) {
    //         passed_day = 0;
    //         ans[i] = passed_day;
    //     } else {
    //         passed_day++;
    //         ans[i] = passed_day;
    //     }
    // }
    rep(i,n) {
        if (fire_works[i]) {
            
        }
    }
    rep(i,n) {
        cout << ans[i] << endl;
    }
    return 0;
}