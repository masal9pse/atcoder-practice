#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    // 等差数列はO(N)で求められる。
    int kousa,initial,N;
    cin >> kousa >> initial >>  N;
    for (int i = 0; i < N; i++)
    {        
        if (i == 0) {
         cout << initial << endl;    
        }
        initial += kousa;
        cout << initial << endl;
    }
}