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
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    map<string,int> sm;
    rep(i,n) {
        sm[s[i]] += 1;
    }
    int ans = 0;
    for (const auto& [key,value] : sm) {
        if (value > ans) {
            ans = value;
        }        
    }
    string name;
    for (auto &i: sm) 
    {
        if (i.second == ans) {
            name = i.first;
        }
    }
    
    cout << name << endl;
    return 0;
}