#include <iostream>
#include <vector> 
using namespace std;

int main() {
    int N;
    cin >> N;
    bool is_prime = true;
    if (N == 1) is_prime = false;
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0) is_prime = false;
    }
    if (is_prime) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}