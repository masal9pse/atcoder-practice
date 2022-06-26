#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, x;
    cin >> n >> x;
    string alfa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<char> strs;
    rep(i, 26)
    {
        rep(j, n)
        {
            char s = alfa[i];
            strs.push_back(s);
        }
    }
    cout << strs[x - 1] << endl;
    return 0;
}