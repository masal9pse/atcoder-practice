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

    vector<int> A(3);
    rep(i, 3) cin >> A[i];
    sort(A.begin(), A.end());
    if (A[0] - A[1] == A[1] - A[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}