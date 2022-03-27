#include <iostream>
#include <vector>
using namespace std;

// A問題はmainの中でreturnを使うことが結構大事
int main()
{
    int a,b;
    cin >> a >> b;
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