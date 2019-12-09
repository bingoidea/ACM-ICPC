// G思路：奥数题，当直线穿过相邻两面，可穿过的方块最多，n为1，最多穿1个；n为2，最多穿4个；n为3，最多穿7个……n为n，最多1+3(n-1)个
#include <iostream>
#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
    int t;
    ll n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << 1 + 3 * (n - 1) << endl;
    }
    return 0;
}
