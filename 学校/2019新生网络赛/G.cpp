// G˼·���Զ����Ʊ�ʾ�������������һ��������������1��һ������ż����1����������������������1��ֻ��Ҫ�ҳ�����������1�����ָ�����ż����1�����ָ�������˼���
#include <iostream>
#include <stdio.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll odd = 0, even = 0; // ll��ֹ����Χ
    for(int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        int cnt = 0;
        while(a)
        {
            if(a&1) cnt++; // ��¼��ǰΪ�Ƿ�Ϊ1
            a >>= 1;
        }
        if(cnt&1) odd++; // ��������1
        else even++;     // ��ż����1
    }
    cout << odd*even;
    //cout << 1ll*odd*even; // ���odd��even��int���ͣ�Ҫ��1llת��Ϊlong long
    return 0;
}
