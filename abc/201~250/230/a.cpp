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
    cin >> n;
    if (n >= 42) {
        n++;
    }
    string str_n = to_string(n);
    if (n >= 10) cout << "AGC0" + str_n << endl;
    else cout << "AGC00" + str_n << endl;
    return 0;
}