// F思路：暴力打表大法好
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
    // 2000个字符串拼接起来长度已经超过5000000
    for(int i = 1; i <= 2000; i++)
    {
        si += to_string(i); // 第i个字符串
        str += si;
        if(str.length() >= 5000000) break;
    }
}

int main()
{
    init();
    //freopen("input.txt", "r", stdin);    //只改变输入流的文件指针，读入这个文件的内容（必须要有input这个文件）stdin是标准输入流的文件指针
    //freopen("output.txt", "w", stdout);  //只改变输出流的文件指针，写入output内（如果没有output这个文件就会自动生成）stdout是标准输出流的文件指针
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
