// B˼·��ֻ�����ڵ�x,y��y,z�ܻ��������ѷ���x��z�����λ���ǹ̶��ģ�ֻ��y������ţ�����ֻ������е�y���ڵ�һ��z֮ǰ�Ϳ���
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
