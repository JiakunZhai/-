#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //将数字字符串变为数字
    string strnum = "123445";
    int int_num = stoi(strnum);
    cout << int_num << endl;
    /**
     * 当然不只是可以转换为int型，也可以转换为 long long ， long double， float，
     * 依然是 sto + （类型缩写） 
    */

   //将数字转化为字符串
    int x = 663432;
    string x_str = to_string(x);
    cout << x_str << endl;
    
}