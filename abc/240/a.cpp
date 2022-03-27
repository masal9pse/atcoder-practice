#include <iostream>
#include <vector>
using namespace std;

// A問題はmainの中でreturnを使うことが結構大事
int main()
{
    int a,b;
    cin >> a >> b;
    // 1≤a<b≤10 この制約なので、
    // if (b - a == 1 || b - a == 9) という条件分岐でもいける。 
    if (a == b - 1 || a - 1 == b) {
        cout << "Yes" << endl;
        return 0;
    }
    if (a == 10 && b == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    if (a == 1 && b == 10) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}