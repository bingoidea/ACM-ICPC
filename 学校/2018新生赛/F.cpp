// F˼·���������󷨺�
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#define ll long long
using namespace std;

string str;
string si;

void init()
{
    str = ""; si = "";
    // 2000���ַ���ƴ�����������Ѿ�����5000000
    for(int i = 1; i <= 2000; i++)
    {
        si += to_string(i); // ��i���ַ���
        str += si;
        if(str.length() >= 5000000) break;
    }
}

int main()
{
    init();
    //freopen("input.txt", "r", stdin);    //ֻ�ı����������ļ�ָ�룬��������ļ������ݣ�����Ҫ��input����ļ���stdin�Ǳ�׼���������ļ�ָ��
    //freopen("output.txt", "w", stdout);  //ֻ�ı���������ļ�ָ�룬д��output�ڣ����û��output����ļ��ͻ��Զ����ɣ�stdout�Ǳ�׼��������ļ�ָ��
    //cout << str << endl;
    int t, k;
    scanf("%d", &t);
    while(t--)
    {
        cin >> k;
        cout << str[k-1] << endl;
    }
    return 0;
}
