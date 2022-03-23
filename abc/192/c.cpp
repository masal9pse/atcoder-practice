#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n,k;
    cin >> n >> k;
    int temp = n;
    for (int i = 0; i < k; i++)
    {
        string str_small_temp = to_string(temp);
        sort(str_small_temp.begin(),str_small_temp.end());
        string str_big_temp = to_string(temp);
        sort(str_big_temp.rbegin(),str_big_temp.rend());
        int small_int = stoi(str_small_temp);
        int big_int = stoi(str_big_temp);
        temp = big_int - small_int;
    }
    cout << temp << endl;
}