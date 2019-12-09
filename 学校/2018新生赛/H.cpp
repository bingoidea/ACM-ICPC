// H思路：lintcode--45. 最大子数组差（https://blog.csdn.net/second24/article/details/79467301）
#include <iostream>
#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

const int maxn = 1e6+5;

int n;
ll a[maxn];
ll maxleft[maxn];
ll maxright[maxn];
ll minleft[maxn];
ll minright[maxn];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
        }
        ll maxcnt, mincnt;
        maxcnt = mincnt = 0;
        maxleft[0] = maxright[n+1] = -100005;
        minleft[0] = minright[n+1] = 100005;
        for(int i = 1; i <= n; i++)
        {
            maxcnt = maxcnt<0 ? a[i] : maxcnt+a[i];
            mincnt = mincnt>0 ? a[i] : mincnt+a[i];
            maxleft[i] = max(maxleft[i-1], maxcnt);
            minleft[i] = min(minleft[i-1], mincnt);
        }
        maxcnt = mincnt = 0;
        for(int i = n; i >= 1; i--)
        {
            maxcnt = maxcnt<0 ? a[i] : maxcnt+a[i];
            mincnt = mincnt>0 ? a[i] : mincnt+a[i];
            maxright[i] = max(maxright[i+1], maxcnt);
            minright[i] = min(minright[i+1], mincnt);
        }
        ll ans = 0;
        for(int i = 2; i <= n; i++)
        {
            ans = max(ans, max(abs(maxleft[i-1]-minright[i]), abs(minleft[i-1]-maxright[i])));
        }
        cout << ans << endl;
    }
    return 0;
}
