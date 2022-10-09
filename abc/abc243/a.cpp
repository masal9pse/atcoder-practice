#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

bool isPrime(int);

int main(void)
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int motherValue = 500 - 30;
    if (X <= A)
    {
        std::cout << (double)1.000000000000 << std::endl;
    }
    else if (motherValue < X){
        std::cout << (double)0.000000000000 << std::endl;
    }
    else
    {
        std::cout << (double)C / motherValue << std::endl;
    }
}