#include <iostream>
#include <map>

using namespace std;

int main()
{

    // 构造函数
    // 尖括号中需要包含两个参数，指明是从何种类型到何种类型的映射关系
    // 当然不只是局限于整形到整形的映射还有下面的写法
    /**
     *  map<char, int>  →   char到int的映射
     *  map<string, int>    →   string到int的映射
     *  map<string, vector<int>>    →   string到vector<int>的映射
     */
    map<int, int> mp;

    // map支持[]运算符，可以直接赋值；
    mp[2] = 1;
    cout << "mp[2] = " << mp[2] << endl;

    mp[1] = 4;
    mp[8] = 9;

    // 使用迭代器遍历
    //map的迭代器返回的是一个二元组（pair）的形式去，因此需要指针访问
    cout << "使用迭代器 iterator " << endl;
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it)
    {
        cout << "   " <<it->first << ": " << it->second << endl;
    }

    //基于范围的遍历
    cout << "基于范围的遍历" << endl;
    for (auto &ele : mp)
    {
        cout << "   " << ele.first << ": " << ele.second << endl;
    }

    // 如果访问不存在的键值对，map会输出一个初值
    // 可以看到输出为 0
    cout << "mp[1] = " << mp[1] << endl;

    // 不可以直接将值修改为0，应该使用erase擦拭
    mp.erase(2);

    // map结果支持find查找（返回的是一个迭代器）
    if (mp.find(2) != mp.end())
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    // count返回元素个数
    cout << mp.count(2) << endl;

    // size返回大小
    cout << mp.size() << endl;

    // clear清空
    mp.clear();

    // empty判空
    cout << mp.empty() << endl;

    return 0;
}