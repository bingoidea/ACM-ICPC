// E˼·��ż����n���Ϊ0��������n���Ϊn�����Դ�ͷ��β���һ�飬ʣ�µ�������ֻ���������ε�����
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
