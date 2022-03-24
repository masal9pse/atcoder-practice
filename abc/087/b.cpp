#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    int x;
    cin >> x;
    int ans = 0;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            for (int k = 0; k <= c; k++)
            {
                if (500 * i + 100 * j + 50 * k == x)
                {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}