#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    string s,t;
    cin >> s >> t;
    bool flag = true;
    rep(i,s.size()) {
        rep(j,t.size()) {
            int s_int = s[i] - '0';
            int t_int = t[j] - '0';
            if (i == j && s_int > t_int) {
                flag = false;
                break;
            }
        }
    }
    
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}