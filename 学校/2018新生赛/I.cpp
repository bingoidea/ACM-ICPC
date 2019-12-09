// I思路：也许是暴力？
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#define ll long long
using namespace std;

int main()
{
    int n, tmp;
    int sum;
    while(cin >> n)
    {
        if(n == 0) break;

        sum = 0; tmp = 0;
        int judge = n/5;
        for(int i = 0; i <= judge; i++)
        {
            tmp = n - 5 * i;
            sum += tmp/3 + 1; // 包括可乐买0瓶的情况
        }
        cout << sum << endl;
    }
    return 0;
}
