#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string word, pg;

    getline(cin, word);
    getline(cin, pg);

    // 将word转换为小写
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    // 将pg转换为小写
    transform(pg.begin(), pg.end(), pg.begin(), ::tolower);

    // 按空格分割并存入unordered——map中
    unordered_map<string, int> mp;
    // 按照空格分割
    // 生命一个输入流
    istringstream strStream(pg);
    string token;

    while (getline(strStream, token, ' '))
    {
        mp[token]++;
    }

    // 数量就是word对应的值
    int count = mp[word];
    pg = " " + pg + " ";
    word = " " + word + " ";
    // 如果存在 计算 word 第一次出现的位置
    if (count > 0)
    {
        cout << count << " " << pg.find(word) << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
