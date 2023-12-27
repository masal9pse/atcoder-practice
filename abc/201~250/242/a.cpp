#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1) {
            cout << s[i] << endl;
            return 0;
        }
    }
    return 0;
}