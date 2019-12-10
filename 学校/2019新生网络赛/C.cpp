// CC思路：预处理，使用两个数组保存范围内的2^x和3^y的结果，然后使用第三个数组保存它们互相乘的结果，最后直接在第三个数组中查询范围内元素个数即可
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

// // 耿直做法，每次样例都算一遍次方
// #include <iostream>
// #include <cmath>
// typedef long long ll;
// using namespace std;

// const ll maxn = 10e17;

// int main()
// {
    // ll l, r, m;
    // // 题目说不大于100个样例，不代表一定有一百个，无需人为使用for循环控制
    // while(cin >> l >> r)
    // {
        // int n = 0;
        // // 对于2来说，58次方已经超过题目给的范围，所以无需再往后循环
        // for(ll i = 0; i <= 58; i++)
        // {
            // // 对于3来说，37次方已经超过题目给的范围，所以无需再往后循环
            // for(ll j = 0; j <= 37; j++)
            // {
                // m = pow(2,i)*pow(3,j); // i和j代表题目中的x和y，m记录每一个2^x*3^y
                // if(m >= l && m <= r) n++;
                // if(m > 2*maxn) break; // 相乘结果有可能超出题目给的范围，若超出，则后面的循环均不用再进行
            // }
        // }
        // cout << n << endl;
    // }
    // return 0;
// }
