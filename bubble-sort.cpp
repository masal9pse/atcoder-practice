#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

bool isPrime(int);

int main(void)
{
    vector<int> cpp_array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "array = [ ";
    for (int i : cpp_array) {
        cout << i << ",";
    }
    cout << "]" << endl;
}

