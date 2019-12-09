// D思路：简单的dp规划，相当于找从起点到终点的最大花费路径，每个点只能从上方或左方到达，所以dp[i][j] = dp[i][j] + max(dp[i-1][j], dp[i][j-1])
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#define ll long long

using namespace std;

int dp[505][505];
char mp[505][505];

int main()
{
    int t;
    int n, m;
    scanf("%d", &t);
    while(t--)
    {
        memset(dp, 0, sizeof(dp));
        scanf("%d%d", &n, &m);
        for(int i = 1; i <= n; i++)
            scanf("%s", mp[i]+1);
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + mp[i][j] - '0';
            }
        }
        printf("%d\n", dp[n][m]);
    }
    return 0;
}
