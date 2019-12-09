// E思路：偶数个n异或为0，奇数个n异或为n，所以从头到尾异或一遍，剩下的数就是只出现奇数次的数字
#include <iostream>
#include <stdio.h>
#include <set>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
    int n, num;
    int ans = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        ans ^= num;
    }
    printf("%d", ans);
    return 0;
}
