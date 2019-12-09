// A思路：寻找平方数，找l和r之间的平方数，即找ceil(sqrt(l))和sqrt(r)之间的数字个数
#include <iostream>
#include <stdio.h>
#include <cmath>
typedef long long ll;
using namespace std;

int main()
{
    ll l, r;
    ll first, last;
    cin >> l >> r;
    first = ceil(sqrt(l));
    last = sqrt(r);
    cout << last-first+1;

    return 0;
}
