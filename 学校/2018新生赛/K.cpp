// K思路：费马小定理+乘法取模
#include <iostream>
#include <stdio.h>
#include <string.h>
typedef long long ll;
using namespace std;

const int mod = 1e9+7;

char a[105], b[105];

ll qpow(ll a, ll b)
{
    ll tmp = a;
    ll ans = 1;
    while(b)
    {
        if(b&1)
        {
            ans = (ans%mod * tmp%mod)%mod;
        }
        tmp = (tmp%mod * tmp%mod)%mod;
        b>>=1;
    }
    return ans;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", a+1);
        scanf("%s", b+1);
        ll len1 = strlen(a+1);
        ll aa = 0;
        for(int i = 1; i <= len1; i++)
            aa = (aa*10+a[i]-'0')%mod;
        ll len2 = strlen(b+1);
        ll bb = 0;
        for(int i = 1; i <= len2; i++)
            bb = (bb*10+b[i]-'0')%(mod-1);
        printf("%lld\n", qpow(aa, bb));
    }
    return 0;
}
