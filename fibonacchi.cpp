#include <iostream>
#include <vector>
#include <map>
using namespace std;
using P = pair<int,int>;

int calc(int x) {
    if(x == 0){
		return 0;
	}else if(x == 1){
		return 1;
	}else{
		return calc(x - 1) + calc(x - 2);
	}
}

int main()
{
    int x;
    cin >> x;
    cout << calc(x) << endl;
    return 0;
}