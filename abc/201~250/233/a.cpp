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
    int x, y;
    cin >> x >> y;
    int k = (y - x);
    int k2 = k / 10;
    if (k2 <= 0)
    {
        cout << 0 << endl;
        return 0;
    };
    int count = 0;
    count = k2;    
    int o = stoi(to_string(k).substr(to_string(k).size() - 1));
    if (o >= 1)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}