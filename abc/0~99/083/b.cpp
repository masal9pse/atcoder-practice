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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> ans_vector(100);
    for (int i = 1; i <= n; i++)
    {
        if (i >= 10)
        {
            string str_i = to_string(i);
            int temp = 0;
            // if (i >= a && i <= b)
            // {
            // forから１文字取得しようとするとchar型になる。
            for (int i = 0; i < str_i.size(); i++)
            {
                // string test = to_string(str_i[i]);
                string test = str_i[i];
                temp += stoi(test);
            }
            // }
            if (temp >= a && temp <= b)
            {
                ans_vector[i] = temp;
                int v1 = 0;
            }
        }
        else if (i >= 1 || i < 10)
        {
            if (i >= a && i <= b)
            {
                // ans_vector.push_back(i);
                ans_vector[i] = i;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < ans_vector.size(); i++)
    {
        ans += ans_vector[i];
        int v5 = 0;
    }

    cout << ans << endl;
}