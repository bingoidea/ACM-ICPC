// B思路：只有相邻的x,y和y,z能互换，不难发现x和z的相对位置是固定的，只有y能任意放，所以只需把所有的y放在第一个z之前就可以
#include <iostream>
#include <stdio.h>
#include <string>
typedef long long ll;
using namespace std;

int main()
{
    string s;
    string ans = "";
    string tmp = "";
    int pos;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'y') tmp += s[i];
        else ans += s[i];
    }
    pos = ans.find_first_of('z');
    if(pos == -1) ans += tmp;
    else ans.insert(pos, tmp);
    cout << ans;

    return 0;
}
