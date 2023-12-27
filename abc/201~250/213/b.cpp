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
    vector<int> A(n);
    vector<int> tempA(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    rep(i, n)
    {
        tempA[i] = A[i];
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++)
    {
        if (tempA[i] == A[n-2])
        {
            cout << i + 1 << endl;
        }
    }
    return 0;
}