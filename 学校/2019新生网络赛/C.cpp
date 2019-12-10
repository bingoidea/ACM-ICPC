// CC˼·��Ԥ����ʹ���������鱣�淶Χ�ڵ�2^x��3^y�Ľ����Ȼ��ʹ�õ��������鱣�����ǻ���˵Ľ�������ֱ���ڵ����������в�ѯ��Χ��Ԫ�ظ�������
#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;

const ll maxn = 10e17;

vector<ll> v;
vector<ll> two;
vector<ll> three;

// 2��58�η��ͳ���Χ��3��37�η��ͳ���Χ
void init()
{
    ll base2 = 2, base3 = 3;
    for(ll i = 0; i <= 58; i++)
    {
        if(i <= 37) {
            two.push_back(pow(base2, i));
            three.push_back(pow(base3, i));
        }
        else {
            two.push_back(pow(base2, i));
        }
    }
    for(auto x : two)
    {
        for(auto y : three)
        {
            if(x*y <= 2*maxn) v.push_back(x*y);
            else break;
        }
    }
}

int main()
{
    init();
    ll l, r;
    ll num;
    while(cin >> l >> r)
    {
        num = 0;
        for(auto x : v)
        {
            if(x >= l && x <= r) num++;
        }
        printf("%lld\n", num);
    }
    return 0;
}

// // ��ֱ������ÿ����������һ��η�
// #include <iostream>
// #include <cmath>
// typedef long long ll;
// using namespace std;

// const ll maxn = 10e17;

// int main()
// {
    // ll l, r, m;
    // // ��Ŀ˵������100��������������һ����һ�ٸ���������Ϊʹ��forѭ������
    // while(cin >> l >> r)
    // {
        // int n = 0;
        // // ����2��˵��58�η��Ѿ�������Ŀ���ķ�Χ����������������ѭ��
        // for(ll i = 0; i <= 58; i++)
        // {
            // // ����3��˵��37�η��Ѿ�������Ŀ���ķ�Χ����������������ѭ��
            // for(ll j = 0; j <= 37; j++)
            // {
                // m = pow(2,i)*pow(3,j); // i��j������Ŀ�е�x��y��m��¼ÿһ��2^x*3^y
                // if(m >= l && m <= r) n++;
                // if(m > 2*maxn) break; // ��˽���п��ܳ�����Ŀ���ķ�Χ����������������ѭ���������ٽ���
            // }
        // }
        // cout << n << endl;
    // }
    // return 0;
// }
