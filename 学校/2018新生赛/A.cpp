// A思路：进制转换
#include <iostream>
#include <cstdio>
#include <cmath>
#define ll long long

using namespace std;

const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;

int main()
{
    int t, n;
    ll num;
    ll score;
    ll zero, one;
    scanf("%d", &t);
    while(t--)
    {
        score = 0; zero = 0; one = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> num;
            if(num%i*2 <= i) score += (ll)floor(num*1.0/2.0);
            else score += num;
        }
        if(score == 0) {
            cout << "1 0" << endl;
        }
        else {
            while(score) {
                if(score%2 == 0) zero++;
                else one++;
                score /= 2;
            }
            cout << zero << " " << one << endl;
        }
    }
    return 0;
}
