#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    // 等差数列はO(N)で求められる。
    int d,a,N;
    cin >> d >> a >>  N;
    for (int i = 0; i < N; i++)
    {        
        if (i == 0) {
         cout << a << endl;    
        }
        a += d;
        cout << a << endl;
    }
}
// https://www.youtube.com/watch?v=cFV5G104n3w&t=76s