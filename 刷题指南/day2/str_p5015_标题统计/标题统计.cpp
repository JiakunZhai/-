#include <iostream>
#include <string>

using namespace std;

// 方法一：（比较繁琐不推荐）
int fangfa1()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    // 字符串的总长度（包括空格，换行符）
    int size = s.size();
    int kongge_num = 0;
    int huanhang_num = 0;
    int num;

    // 统计字符串中换行符的个数
    while (true)
    {
        if (s.find(" ") != string::npos)
        {
            s[s.find(" ")] = '!';
            kongge_num++;
        }
        // 如果不存在则结束循环
        else
        {
            break;
        }
    }

    while (true)
    {
        if (s.find("\n") != string::npos)
        {
            s[s.find("\n")] = '!';
            huanhang_num++;
        }
        // 如果不存在则结束循环
        else
        {
            break;
        }
    }

    num = size - kongge_num - huanhang_num;

    cout << num << endl;
    return 0;
}

// 方法二
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && s[i] != '\n')
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
