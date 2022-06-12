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
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '6') {
            ans += '9';
        } else if (s[i] == '9') {
            ans += '6';
        } else {
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}