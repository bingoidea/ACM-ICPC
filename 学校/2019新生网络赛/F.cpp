// F˼·��Ԥ�����ҳ�ǰһ���������
#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;

// ��һ���������
const int maxn = 1e7+1e6;

vector<ll> goodNum;

// Ԥ����
void init()
{
    int tmp, sum;
    for(int i = 10; i <= maxn; i++)
    {
        tmp = i; sum = 0;
        while(tmp)
        {
            sum += tmp%10;
            tmp /= 10;
            if(sum > 10) break;
        }
        if(sum == 10) goodNum.push_back(i);
    }
//    cout << goodNum.size() << endl;
//    for(auto x : goodNum)
//    {
//        cout << x << ' ';
//    }
}

int main()
{
    init();
    int t, k;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &k);
        cout << goodNum[k-1] << endl;
    }
    return 0;
}
