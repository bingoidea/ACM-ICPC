// A˼·��Ѱ��ƽ��������l��r֮���ƽ����������ceil(sqrt(l))��sqrt(r)֮������ָ���
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
