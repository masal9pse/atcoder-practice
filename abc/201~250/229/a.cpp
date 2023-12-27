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
    string s1,s2;
    cin >> s1 >> s2;
    if ((s1 == ".#" && s2 == "#.") || (s1 == "#." && s2 == ".#")) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}