// G˼·�������⣬��ֱ�ߴ����������棬�ɴ����ķ�����࣬nΪ1����ഩ1����nΪ2����ഩ4����nΪ3����ഩ7������nΪn�����1+3(n-1)��
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
