// B˼·��z���ַ������Ҽ���ǰ׺���Ǻ�׺���Ӵ���https://blog.csdn.net/weixin_39778570/article/details/81952309��
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

//����ɸ��
const int MAXX = 1000000;//��MAX��Χ�ڵ�����
long long su[MAXX],cnt;
bool isprime[MAXX];
void prime()
{
    cnt=1;
    memset(isprime,1,sizeof(isprime));//��ʼ����Ϊ��������Ϊ����
    isprime[0]=isprime[1]=0;//0��1��������
    for(long long i=2; i <= MAXX; i++)
    {
        if(isprime[i])
            su[cnt++]=i;//��������i
        for(long long j=1; j < cnt && su[j]*i<MAXX; j++)
        {
            isprime[su[j]*i]=0;//ɸ��С�ڵ���i��������i�Ļ����ɵĺ���
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
        ans.clear(); // �������
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
            ans.push_back(m);  // �ȼ���������
            m = nxt[m];        // ��p[1...m]����ǰ��׺��ͬ�Ĳ������ϱ���
        }
        // �������
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
