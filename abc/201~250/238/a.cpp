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
    int n;
    cin >> n;
    if (pow(2,n) > pow(n,2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}