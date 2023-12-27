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
    int n, a, b;
    cin >> n >> a >> b;
    int tate = n * a;
    int yoko = n * b;
    for (int i = 0; i < tate; i++)
    {
        for (int j = 0; j < yoko; j++)
        {
            if (j % b == 0)
            {
                cout << ".";
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}