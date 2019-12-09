// J思路：如果n为1，4，7……则cjh赢，由此可得出一个通式
#include <iostream>
#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;

int main()
{
    int n;
    while(cin >> n) {
        if(n == 0) break;
        if((n+2)%3 == 0) cout << "Cjh" << endl;
        else cout << "Lre" << endl;
    }
    return 0;
}
