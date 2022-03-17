#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int n,X;
vector<int> a,b;

// iは合計値
bool f (int i, int x) {
   if (i == n) return x == X;
   bool res = false;
   int v = x;
   int v2 = a[i];
   int v3 = b[i];
   int v4 = i;
   int v5 = x+a[i];   
   int v6 = x+b[i];
   int v7 = 4;
   if (f(i+1,x+a[i]) || f(i+1,x+b[i])) res = true;
   return res;
}

int main()
{
    cin >> n >> X;
    a = vector<int>(n);
    b = vector<int>(n);
    rep(i,n) cin >> a[i] >> b[i];
    if (f(0,0)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}