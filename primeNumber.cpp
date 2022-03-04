#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

// まずは標準出力で、n行表示する

bool isPrime(int);

int main(void)
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (isPrime(a))
        {
            count++;
        }
    }
    std::cout << count << std::endl;
    // printf("%d", count);
}

bool isPrime(int num)
{
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    return true;
}