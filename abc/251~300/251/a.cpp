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
    if (s.size() == 1) {
        cout << s << s << s << s << s << s << endl;
    } else if (s.size() == 2) {
        cout << s << s << s << endl;;
    } else if (s.size() == 3){
        cout << s << s << endl;
    }
    
    return 0;
}