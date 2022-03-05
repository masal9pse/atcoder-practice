#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

// まずは標準出力で、n行表示する

bool isPrime(int);

int main(void)
{
    int n, r[2], maxv, min;
	cin >> n;
	cin >> r[0] >> r[1];
	maxv = r[1] - r[0];
    // int n;
    // cin >> n;
    for (int j = 0; j < n -1 ; j++)
    {
        int a;
        cin >> a;
    }
    // for (int i = 0; i < j - 1; i++)
        // {
        //     int maxv;
        //     if (i != 0) {
        //         // if (maxv > ){}
        //     }
        // }        
    // std::cout << count << std::endl;    
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
    printf("%d",12);
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

int max(int a, int b)
{
	if (a >= b)return a;
	else return b;
}