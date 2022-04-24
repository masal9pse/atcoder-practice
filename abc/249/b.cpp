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
    string s;
    cin >> s;
    bool flag = false;
    if (regex_search(s, std::regex("[A-Z]")) && regex_search(s, std::regex("[a-z]")))
    {
        flag = true;
    }
    bool finished = false;
    if (flag)
    {
        for (int i = 0; i < s.size(); i++)
        {
            char a = s[i];
            int c = 3;
            for (int j = 1; j < s.size(); j++)
            {
                if (i != j && s[i] == s[j])
                {
                    flag = false;
                    finished = true;
                    break;
                }
            }
            if (finished)
            {
                break;
            }
        }
    }

    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}