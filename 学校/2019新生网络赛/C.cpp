// CC思路：预处理，保存范围内的2^x*3^y
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

// 2到58次方就超范围，3到37次方就超范围
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
