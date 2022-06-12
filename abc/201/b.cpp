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
    int n;
    cin >> n;
    vector<pair<int,string>> data(n);
    rep(i,n) {
        cin >> data[i].second >> data[i].first;
    }
    sort(data.rbegin(),data.rend());
    cout << data[1].second << endl;
    return 0;
}