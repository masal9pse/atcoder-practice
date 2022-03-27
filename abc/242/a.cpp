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
    int v,a,b,c;
    cin >> v >> a >> b >> c;
    int sum = a + b + c; 
    int amari = v % sum;
    if (amari < a) {
        cout << "F" << endl;
    } else if (amari < a + b) {
        cout << "M" << endl;
    } else {
        cout << "T" << endl;
    }
}