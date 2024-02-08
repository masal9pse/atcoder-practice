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
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i, n) cin >> A[i];
    // int count = 0;
    bool flag = true;
    int ans = 0;
    while (flag)
    {
        vector<int> tempA(n);
        int count = 0;
        rep(i, n)
        {
            if (A[i] % 2 == 0)
            {
                count++;
                // tempA.push_back(A[i]);
                tempA[i] = A[i];
                int b = 3;
            }
        }
        if (count == n)
        {
            flag = true;
            rep(i,n) {
              tempA[i] /= 2;
              int v7 = 3;
            }
            int v6 = 3;
            A = tempA;
            ans++;
            int v1 = 0;
        }
        else
        {
            flag = false;
            int v2 = 2;
        }
    }
    cout << ans << endl;
}