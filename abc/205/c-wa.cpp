#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ac = pow(a, c);
    int bc = pow(b, c);
    if (ac < bc)
    {
        cout << "<" << endl;
    }
    else if (ac > bc)
    {
        cout << ">" << endl;
    }
    else if (ac == bc)
    {
        cout << "=" << endl;
    }
}