// B思路：z找字符串中找即是前缀又是后缀的子串（https://blog.csdn.net/weixin_39778570/article/details/81952309）
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long ll;
const int maxn = 100005;

int nxt[maxn];
int m,t;
char p[maxn];
vector<int> ans;

//线性筛法
const int MAXX = 1000000;//求MAX范围内的素数
long long su[MAXX],cnt;
bool isprime[MAXX];
void prime()
{
    cnt=1;
    memset(isprime,1,sizeof(isprime));//初始化认为所有数都为素数
    isprime[0]=isprime[1]=0;//0和1不是素数
    for(long long i=2; i <= MAXX; i++)
    {
        if(isprime[i])
            su[cnt++]=i;//保存素数i
        for(long long j=1; j < cnt && su[j]*i<MAXX; j++)
        {
            isprime[su[j]*i]=0;//筛掉小于等于i的素数和i的积构成的合数
        }
    }
}

int main()
{
    prime();
    int cas, tmp;
    ll sum;
    cin >> cas;
    while(cas--)
    {
        scanf("%s", p+1);
        sum = 0;
        ans.clear(); // 清空数组
        m = strlen(p+1);
        nxt[0] = -1;
        int j = -1;
        for(int i=1; i<=m; i++)
        {
            while(j>=0 && p[j+1]!=p[i]) j = nxt[j];
            nxt[i] = ++j;
        }
        while(m)
        {
            ans.push_back(m);  // 先加入自身长度
            m = nxt[m];        // 与p[1...m]自身前后缀相同的不断往上遍历
        }
        // 倒着输出
        reverse(ans.begin(), ans.end());
        for(int i=0; i<ans.size()-1; i++)
        {
            int judge = ans[i];
            tmp = 0;
            for(int i = 1; i <= judge; i++)
            {
                tmp += p[i] - 'a' + 1;
            }
            if(isprime[tmp]) sum += tmp;
        }
        cout << sum << endl;
    }
    return 0;
}
