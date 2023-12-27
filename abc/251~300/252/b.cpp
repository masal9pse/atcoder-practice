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
    int n,k;
    cin >> n >> k;
    vector<int> A(n);
    vector<int> B(k);
    rep(i,n) cin >> A[i];
    rep(i,k) cin >> B[i];
    bool ans = false;
    int mx = 0;
    rep(i,n) mx = max(mx,A[i]);
    rep (i,k) {
        if (A[B[i]-1] == mx) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}