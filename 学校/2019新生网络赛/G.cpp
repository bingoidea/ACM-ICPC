// G思路：以二进制表示数，如果两个数一个数中有奇数个1，一个数有偶数个1，则异或起来结果有奇数个1，只需要找出所有奇数个1的数字个数和偶数个1的数字个数，相乘即可
#include <iostream>
#include <stdio.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll odd = 0, even = 0; // ll防止爆范围
    for(int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        int cnt = 0;
        while(a)
        {
            if(a&1) cnt++; // 记录当前为是否为1
            a >>= 1;
        }
        if(cnt&1) odd++; // 有奇数个1
        else even++;     // 有偶数个1
    }
    cout << odd*even;
    //cout << 1ll*odd*even; // 如果odd和even是int类型，要乘1ll转化为long long
    return 0;
}
