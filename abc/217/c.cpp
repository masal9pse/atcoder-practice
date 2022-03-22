#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<n;i++)

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);    
    for (int i = 0; i < n; i++) cin >> p[i];
    vector<int> q(n);

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = p[i];
        q[temp-1] = i+1;
        int v1 = 3;
    }
    rep(i,n) {
        cout << q[i] << " ";
    }
}