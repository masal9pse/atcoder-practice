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
    string t = "";    
    rep(i,pow(10,5)) {
        t += "oxx";
    }
    int k = t.find(s);    
    if (k == string::npos) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}