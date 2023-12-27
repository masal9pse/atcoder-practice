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
    int n2 = n * 2 + 1;
    vector<bool> used(n2 + 1);
    while (true)
    {
        int x = 0;
        for (int i = 1; i <= n2; i++)
        {
            if (!used[i])
            {
                x = i;
                break;
            }
        }
        cout << x << endl;
        used[x] = true;

        cin >> x;
        if (x == 0) break;
        used[x] = true;
    }
}