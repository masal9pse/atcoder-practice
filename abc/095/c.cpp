#include <iostream>
#include <vector>
#include <map>
using namespace std;

// ABピザを２枚買うと、x,yが両方+1される。
int main()
{
    int a, b, c,x,y;
    cin >> a >> b >> c >> x >> y;
    int simple_ans1 = c * 4 + a*1;
    int simple_ans2 = a * x + b * y;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
          for (int k = 0; k < x + y; k++)
          {
            
          }
        }
    }
    

    return 0;
}