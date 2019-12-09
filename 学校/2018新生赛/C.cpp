// C思路：简单的贪心算法
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#define ll long long
#define INF 0x3f3f3f3f

using namespace std;

int a[10005];
int b[10005];

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    int t;
    int n, m;
    int sum;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for(int i = 1; i <= m; i++)
        {
            cin >> b[i];
        }
        sort(a+1, a+1+n, cmp);
        sort(b+1, b+1+m);
        int judge = min(n, m);
        for(int i = 1; i <= judge && (a[i]-b[i]) > 0; i++)
        {
            sum += (a[i]-b[i]);
        }
        cout << sum << endl;
    }
    return 0;
}
