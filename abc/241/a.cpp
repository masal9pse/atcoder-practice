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
    vector<int> A(10);
    rep(i, 10) cin >> A[i]; 
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (ans == j)
            {
                ans = A[j];
                int k = 3;
                break;
            }
        }
        int v2 = 3;
    }
    cout << ans << endl;
}