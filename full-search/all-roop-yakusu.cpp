#include <iostream>
#include <vector> 
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    int result_count = 0;
    for (int i = 1; i <= N; i++)
    {
    int yakusu_count = 0;
     for (int j = 1; j <= i; j++)
     {
        if (i % j == 0) yakusu_count++;
     }
        if (yakusu_count == K) result_count ++;
    }
    cout << result_count << endl;
    return 0;
}