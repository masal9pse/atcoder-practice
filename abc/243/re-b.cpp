#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip> 
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    int a_count = 0;
    int b_count = 0;
    rep(i,n) {
        rep(j,n) {
            if (i == j && a[i] == b[j]) {
                a_count++;
            } else if (i != j && a[i] == b[j]) {
                b_count++;
            }
        }
    }
    cout << a_count << endl;
    cout << b_count << endl;
    return 0;
}