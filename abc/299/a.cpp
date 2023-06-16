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
#define rep3(i, n) for (int i = 0; i <= n; i++)
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = false;
    rep(i,n) {
        if (!flag && s[i] == '|') flag = true; 
        else if (flag && s[i] == '|') {
            flag = false;
        } else if (flag && s[i] == '*') {
            cout << "in" << endl;
            return 0;
        }
    }
    cout << "out" << endl;
    return 0;
}