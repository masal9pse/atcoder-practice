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
    int n, w;
    cin >> n >> w;
    vector<int> A;
    rep(i, n) cin >> A[i];
    int sum = 0;
    int count = 0;

    // rep(i, n)
    // {
    //     if (A[i] < w) {
    //         count ++;
    //     }
    //     rep(j, n)
    //     {
    //         if (A[i] + A[j] < w) {
    //             count ++;
    //         }
    //         rep(k, n)
    //         {
    //             if (A[i] + A[j] + A[k] < w) {
    //                 count++;
    //             }
    //         }
    //     }
    // }
    cout << count << endl;
    return 0;
}