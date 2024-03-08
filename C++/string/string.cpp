#include <iostream>
#include <string>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 构造一个字符串
    string s;

    // 输入
    cin >> s;
    // 输出
    cout << s;


    //使用getline读入一整行（遇到"\n"停止）
    getline(cin, s);

    /**
     * 如果想要c/c++代码混用的情况下
     * 需要单独设置一个缓冲区
     *
     * char buf[100];
     * scanf("%s", &buf);
     * s = buf;
     * cout << s;
     * 当然也可以使用printf
     * printf("%s", s.c_str());
     */

    // 对字符串赋初值
    string a(100, 's');
    // 当然使用下面的这种方法也可以
    // string s = "hello world"

    // 修改字符串的值
    s[0] = '1';

    string s1 = "awa", s2 = "awa";

    // 判断两个字符串是否相等
    if (s1 == s2)
    {
        cout << "yes" << endl;
    }

    // + 运算符（拼接两个字符串）
    cout << s1 + s2 << endl;

    // 取子串
    // substr 接受两个参数，第一个参数是子串的起始位置，
    //  第二个参数是子串的长度 如果不指定参数，则默认取到最后一位
    cout << s1.substr(0) << endl;
    cout << s1.substr(0, 2) << endl;

    // 判断子串是否存在
    // find函数返回的是存在的子串起始点的下标
    // 如果找不到子串则返回 npos 这个常数（或者说是标志）
    // 与string::npos比较如果相等则则说明子串不存在
    if (s1.find("aw") != string::npos)
    {
        cout << "yes" << endl;
    }

    return 0;
}