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
    int century = n / 100;
    if (n % 100 == 0) cout << n / 100 << endl;
    else cout << n / 100 + 1<< endl;
    return 0;
}