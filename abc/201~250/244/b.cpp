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
    string t;
    cin >> n;
    cin >> t;
    int x = 0, y = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 'S')
        {
            if (d == 0)
                x++;
            if (d == 1)
                y--;
            if (d == 2)
                x--;
            if (d == 3)
                y++;
        }
        else
        {
            d = (d+1) % 4;                        
        }
    }
    cout << x << " " << y;
    return 0;
}