#include <iostream>
#include <string>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //构造一个字符串
    string s;

    //输入
    cin >> s;
    //输出
    cout << s;

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

    //对字符串赋初值
    string a(100, 's');
    //当然使用下面的这种方法也可以
    //string s = "hello world"

    //修改字符串的值
    

    return 0;
}