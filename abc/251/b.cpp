#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <regex>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)

void printVec(std::vector<int> &vec) {
//   std::cout << "";
  int count = 0;
  for (auto it = vec.begin(); it != vec.end(); ++it) {
      count++;
    // std::cout << *it << " ";
  }
  cout << count << endl;
//   std::cout << std::endl;
}


int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> A(n);
    rep(i, n) cin >> A[i];
    // vector<int> ans(1000000);
    vector<int> ansList;
    int sum = 0;
    int count = 0;

    rep(i, n)
    {
        if (A[i] <= w)
        {
            count++;
            ansList.push_back(A[i]);
        }
    }

    if (n >= 2)
    {
        rep(i, n)
        {
            rep(j, i)
            {
                if (i != j)
                {
                    if (A[i] + A[j] <= w)
                    {
                        count++;
                        ansList.push_back(A[i] + A[j]);
                    }
                }
            }
        }
    }

    if (n >= 3)
    {
        rep(i, n)
        {
            rep(j, n)
            {
                rep(k, n)
                {
                    if (i != j && i != k && j != k)
                    {
                        if (A[i] + A[j] + A[k] <= w)
                        {
                            count++;
                            ansList.push_back(A[i] + A[j] + A[k]);
                        }
                    }
                }
            }
        }
    }
    sort(ansList.begin(),ansList.end());
    ansList.erase(unique(ansList.begin(),ansList.end()),ansList.end());    
    printVec(ansList);
    return 0;
}