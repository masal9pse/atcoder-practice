#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int s, t, x;
    cin >> s >> t >> x;
    if (s < t)
    {
        if (s <= x && x < t)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
    {
        if (s <= x || x < t)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}