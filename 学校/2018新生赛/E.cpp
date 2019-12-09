// E思路：不断拆解
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#define ll long long
#define INF 0x3f3f3f3f

using namespace std;

bool dislike(int num)
{
    while(num%2 == 0) num /= 2;
    while(num%3 == 0) num /= 3;
    while(num%5 == 0) num /= 5;
    return num == 1? 1 : 0;
}

int main()
{
    int n;
    while(cin >> n) {
        if(n == 1) cout << "YES" << endl;
        else {
            if(dislike(n)) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#define ll long long
#define INF 0x3f3f3f3f

using namespace std;// 第5842个满足条件的数，数量级已经是2*10的9次方

int num[100005];

int Min(int a, int b, int c)
{
    int tmp = a;
    if(b < tmp) tmp = b;
    if(c < tmp) tmp = c;
    return tmp;
}

void init()
{
    memset(num, 0, sizeof(num));
    int p2, p3, p5, tmp;
    p2 = p3 = p5 = 1;
    while() {
        tmp = Min(p2*2, p3*3, P4*4)
        num[tmp] = 1
    }
}

int main()
{
    int p2,p3,p5,p7;
    p2=p3=p5=p7=1;
    num[1] = 0;

    return 0;
}
