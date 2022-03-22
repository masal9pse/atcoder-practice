#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int x;
    cin >> x;
    bool flag = false;
    int count = 0;
    int plusCount = 0;
    while (!flag)
    {
        rep(i,n) {
         plusCount++;
         count += a[i];
         if (x < count) {
            flag = true;
            break;
         }
        }
    }
    
    cout << plusCount << endl;
    return 0;
}