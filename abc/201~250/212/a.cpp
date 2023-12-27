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
    int a,b;
    cin >> a >> b;
    if (0 < a && b == 0) {
        cout << "Gold" << endl;
    } else if (a == 0 && 0 < b){
        cout << "Silver" << endl;
    } else if (0 < a && 0 < b) {
        cout << "Alloy" << endl;
    }
    return 0;
}