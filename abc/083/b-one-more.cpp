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
    int n,a,b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = findSumOfDigits(i);

        if (sum >= a && sum <= b) {
            ans += i;
        }
    }
    cout << ans << endl;
}