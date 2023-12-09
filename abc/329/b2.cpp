#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <map>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    // ll c = 229 / 10;
    ll a,b;
    cin >> a >> b;
    int a_size = to_string(a).size();
    int b_size = to_string(b).size();
    int n = min(a_size,b_size);
    rep(i,n) {
        int a_last = a % 10;
        int b_last = b % 10;
        if (a_last + b_last >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
        a /= 10;
        b /= 10;
    }
    cout << "Easy" << endl;
    return 0;
}