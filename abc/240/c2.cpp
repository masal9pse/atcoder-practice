#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0; i < n;i++);

int N,X;
vector<int> a;
vector<int> b;
bool f(int i,int x) {
   if (i == N) return x == X;
   bool res = false;
   if (f(i,x+a[i]) || f(i,x+b[i])) res = true;
   return res;
}

int main()
{
    cin >> N >> X;
    a = vector<int>(N);
    b = vector<int>(N);
    rep(i,N) cin >> a[i] >> b[i];
    if(f(0,0)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}