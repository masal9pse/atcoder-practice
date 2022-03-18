#include <iostream>
#include <vector>
#include <map>
using namespace std;
using P = pair<int,int>;
int N, X;
vector<int> a,b;
map<P,bool> memo;

bool f(int i, int x)
{
    if (i == N)
        return x == X;
    P arg(i,x);
    map v1 = memo;
    if (memo.count(arg)) {
        return memo[arg];
    }
    bool res = false;
    bool q2 = memo[P(i,x)];
    map q3 = memo;
    int q4 = memo.count(arg);
    vector<int> q5 = a;
    vector<int> q6 = b;
    int q7 = 5;
    if (f(i + 1, x + a[i]) || f(i + 1, x + b[i]))
        res = true;
    // bool v2 = memo[P(i,x)];
    // map v3 = memo;
    // int v4 = memo.count(arg);
    // int v5 = 5;
    return memo[P(i,x)] = res;
}

int main()
{
    cin >> N >> X;
    a = vector<int>(N);
    b = vector<int>(N);
    for (int i = 0; i < N; i++)
        cin >> a[i] >> b[i];
    if (f(0, 0))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}