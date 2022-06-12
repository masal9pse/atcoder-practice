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
    int n;
    string s;
    cin >> n;
    cin >> s;
    if (s[n-1] == 'o') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}