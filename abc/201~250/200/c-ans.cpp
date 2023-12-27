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
    vector<int> A(n);
    vector<int> cnt(200);
    rep(i, n) cin >> A[i];
    int ans = 0;
    rep(i,200) {
       cnt[A[i]%200]++;
    }
    
    return 0;
}