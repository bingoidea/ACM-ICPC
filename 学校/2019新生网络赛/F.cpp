// F思路：预处理找出前一万个完美数
#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;

// 第一万个完美数
const int maxn = 1e7+1e6;

vector<ll> goodNum;

// 预处理
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
