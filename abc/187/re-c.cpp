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

int main()
{
    int n;    
    // cin >> n;
    vector<string> s(n);
    set<string> string_set;
    map<string,int> mp;
    mp["abc"] = 3;
    mp["dch"] = 3;
    mp["!dch"] = 3;
    string_set.insert("abc");
    string_set.insert("dch");
    string_set.insert("!dch");
    // rep(i,n) {
    //     cin >> s[i];
    //     string_set.insert(s[i]);
    // }

    // rep(i,n) {
    //     if(string_set.count("!"+s[i]) >= 1) {
    //         cout << s[i] << endl;
    //         return 0;
    //     }
    // }
    // cout << "satisfiable" << endl;
    return 0;
}