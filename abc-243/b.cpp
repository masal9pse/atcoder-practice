#include <iostream>
#include <iterator>
#include <algorithm>
#include <limits>

using std::cout; using std::endl;
using std::string; using std::cin;

int main() {
    string input;
    cin >> input;
    std::sort(input.begin(), input.end());
    std::cout << input << std::endl;

    return EXIT_SUCCESS;
}