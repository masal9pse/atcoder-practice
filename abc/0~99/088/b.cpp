#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

// 各桁の和を計算する関数
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.rbegin(),a.rend());
    int tempA = 0;
    int tempB = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            tempA += a[i];
        } else if (i % 2 != 0) {
            tempB += a[i];
        }
    }
    int ans = tempA - tempB;
    cout << ans << endl;
}