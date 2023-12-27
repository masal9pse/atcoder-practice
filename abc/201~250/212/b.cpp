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
    string x;
    cin >> x;
    bool same = true;
    bool step = true;
    rep(i,3) {
        if (x[i] != x[i+1]) same = false;
        int a = stoi(x.substr(i,1)); 
        int b = stoi(x.substr(i+1,1)); 
        if ((a+1) % 10 != b) step = false;
    }
    if (same || step) cout << "weak" << endl;
    else cout << "strong" << endl;
    return 0;
}