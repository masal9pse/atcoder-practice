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
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    int n,m;
    cin >> n >> m;
    map<string,int> s_map;
    string s,t;
    rep(i,n) {
        cin >> s;
        s_map[s] = 0;
    }

    rep(i,m) {
        cin >> t;
        if (s_map.count(t)) {
            s_map[t] = 1;
            int k = 3;
        }
    }

    for (auto &i: s_map)
    {
        cout << i.first << " ";
    }
    cout << endl;
    
    return 0;
}