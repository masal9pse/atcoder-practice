#include <iostream>
#include <vector> 
using namespace std;

int main() {
    int N,X,Y;
    cin >> N >> X >> Y;
    vector<int> A(N);
    A[0] = X;
    A[1] = Y; 
    int result;
    for (int i=2;i<N;i++) {
      result += (A[i-2] + A[i-1]) % 100;
    }
    cout << result << endl;
}