#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 

string getStr(string s1,string s2,string s3,string s4) {
    string ans1;
    string ans2;
    string ans3;
    string ans4;
    if (s1 == "1") {
        ans2 = "1";
    } else if (s1 == "0") {
        ans2 = "0";
    }

    if (s2 == "1") {
        ans3 = "1";
    } else if (s2 == "0") {
        ans3 = "0";
    }

    if (s3 == "1") {
        ans4 = "1";
    } else if (s3 == "0") {
        ans4 = "0";
    }
    return "0" + ans2 + ans3 + ans3;
}

int main()
{
    string s;
    cin >> s;
    string s1;
    string s2;
    string s3;
    string s4;
    s1.push_back(s[0]);
    s2.push_back(s[1]);
    s3.push_back(s[2]);
    s4.push_back(s[3]);
    string ans = getStr(s1,s2,s3,s4);
    cout << ans << endl;
    return 0;
}