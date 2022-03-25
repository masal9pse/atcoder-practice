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
    string s;
    cin >> s;
    // string t;
    // sは自由に繰り返されるので、例えば下記のテストケースだとYesにならない。
    // dreamdreamdreamdreamdreamdreamdreamdreamdreamdreamdream // NO
    vector<string> dream_vec = {"", "dream", "dreamer", "erase", "eraser"};
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                for (int l = 0; l < 5; l++)
                {
                    string t = "";
                    t = dream_vec[i] + dream_vec[j] + dream_vec[k] + dream_vec[l];
                    if (s == t)
                    {
                        flag = true;
                    }
                }
            }
        }
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}