// D思路：a*b=gcd(a,b)*lcm(a,b)
#include <iostream>
#include <stdio.h>
#include <cmath>
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
    return a/gcd(a,b)*b;
}

int main()
{
    int t, cas = 1;
    ll a, b;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld%lld", &a, &b);
        printf("Case #%d: %lld\n", cas++, lcm(a,b));
    }
    return 0;
}
