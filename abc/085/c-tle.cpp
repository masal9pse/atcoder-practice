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
    ll n, y;
    int count = 0;
    int tempI = -1, tempJ = -1, tempK = -1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            for (int k = 0; k <= n - i - j; k++)
            {
                if (y == 10000 * i + 5000 * j + 1000 * k)
                {
                    tempI = i;
                    tempJ = j;
                    tempK = k;
                }
            }
        }
    }
    cout << tempI << " " << tempJ << " " << tempK << endl;
}