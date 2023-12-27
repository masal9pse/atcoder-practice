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
    int l,r;
    string s;
    cin >> l >> r;
    cin >> s;
    string st;
    for (int i = l-1; i < r; i++)
    {        
        st += string(1,s[i]);
    }
    reverse(st.begin(),st.end());
    string left_substr = s.substr(0,l-1);
    string right_substr = s.substr(r);
    cout << left_substr + st + right_substr << endl;
    return 0;
}