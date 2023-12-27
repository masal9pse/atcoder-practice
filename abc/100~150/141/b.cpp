#include <iostream>
#include <vector>
#include <map>
using namespace std;
using P = pair<int,int>;

int main()
{
    int n;
    cin >> n;
    
    bool flag = flag;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
          if (n == i * j) flag = true;
        }
    }
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;    
    return 0;
}