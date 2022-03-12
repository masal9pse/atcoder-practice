#include <iostream>
#include <vector> 
using namespace std;

int main() {
    string S;
    cin >> S;
    int sLength = S.length();
    bool is_flag = true;
    for (int i = 0; i < sLength; i++)
    {
        char a = S[i];
        char b = S[(sLength-1)-i];
        int c = 3;
        if (S[i] != S[(sLength-1)-i]) {
         is_flag = false;
        }
    }
    return 0;
}
