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
    int abc;
    cin >> abc;
    int a = abc / 100;
    int bc = abc % 100;
    
    int b = bc / 10;
    int c = bc % 10;
    int bca = 100 * b + 10 * c + a;
    int cab = 100 * c + 10 * a + b;
    cout << abc + bca + cab << endl;
    return 0;
}