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
    string s1,s2,s3,t;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    cin >> t;
    string ans = "";
    rep(i,t.size()){
        if (t[i] == '1') {
            ans += s1;
        }
        if (t[i] == '2') {
            ans += s2;
        }
        if (t[i] == '3') {
            ans += s3;
        }
    }
    cout << ans << endl;
    return 0;
}