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
    int a,b;
    cin >> a >> b;
    double ab_size = sqrt(pow(a,2)+pow(b,2));
    cout << fixed << setprecision(12) << a / ab_size << " " << b / ab_size << endl;
    return 0;
}