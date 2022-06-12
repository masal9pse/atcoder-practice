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
    int r, c;
    cin >> r >> c;
    int a_1_1, a_1_2;
    cin >> a_1_1 >> a_1_2;
    int a_2_1, a_2_2;
    cin >> a_2_1 >> a_2_2;
    vector<int> a1 = {a_1_1, a_1_2};
    vector<int> a2 = {a_2_1, a_2_2};
    if (r == 1)
    {
        cout << a1[c - 1] << endl;
    }
    else
    {
        cout << a2[c - 1] << endl;
    }

    return 0;
}