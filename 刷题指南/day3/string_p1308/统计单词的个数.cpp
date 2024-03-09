#include <iostream>
#include <sstream>
#include <string>
#include <functional>
// #include <vector>
// #include <set>
#include <unordered_map>
#include <cctype>
#include <algorithm>
using namespace std;

//规律规则
bool cmp(pair<string, int> pa, string st){
    return pa.first == st;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string t;
    getline(cin, t);

    // 将大写字母转换为小写字母
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    string s;
    getline(cin, s);

    // 创建一个字符串流保存
    istringstream strStream(s);
    string token;

    // 保存文章中的单词
    unordered_map<string, int> danci;
    // unordered_map<string, int> wordCount;

    while (getline(strStream, token, ' '))
    {
        transform(token.begin(), token.end(), token.begin(), ::tolower);
        danci[token]++;
    }

    int count = danci.count(t);
    // int i = 0;

    //转换为小写
    // for (auto &ele : danci)
    // {
    //     for (auto &c : ele)
    //     {
    //         if (isupper(c))
    //         {
    //             c = tolower(c);
    //         }
    //     }
    // }



    // for (auto &ele : dancis)
    // {
    //     cout << ele << endl;
    // }

    // 如果找到了t串，则输出位置和出现次数
    if (count > 0)
    {
        // cout << (find(danci.begin(), danci.end(), t) - danci.begin()) << " " << count << endl;
        auto it = find_if(danci.begin(), danci.end(), bind(cmp, placeholders::_1, t));
        cout << count << " " << (distance(danci.begin(), it)+1);
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}