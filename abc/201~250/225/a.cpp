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
    if (s[0] == s[1] && s[1] == s[2]) cout << 1 << endl;
    else if (s[0] != s[1] && s[0] != s[2] && s[1] != s[2]) cout << 6 << endl;
    else cout << 3 << endl; 
    return 0;
}