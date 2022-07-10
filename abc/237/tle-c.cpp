#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
#include <iomanip>
#include <map>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s,copy_str,first_str;
    cin >> s;
    int count = 0;
    first_str = s;
    
    while (count <= first_str.size()) {
        copy_str = s;
        reverse(s.begin(),s.end());
        if (s == copy_str) {
            cout << "Yes" << endl;
            return 0;
        } else {
            reverse(s.begin(),s.end());
            s = "a" + s;
        }
        count ++;
    }
    cout << "No" << endl;
    return 0;
}