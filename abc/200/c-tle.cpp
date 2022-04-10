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
    rep(i,n) cin >> A[i];
    int count = 0;
    rep(i,n) {
        rep(j,n) {
            if (i == j) {
                break;
            }
            if ((A[j] - A[i]) % 200 == 0) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}