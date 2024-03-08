#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string isbn;

    cin >> isbn;

    vector<int> num;

    for (int i = 0; i < isbn.size(); i++)
    {
        if (isbn[i] == '-' || isbn[i] == 'X')
        {
            continue;
        }
        else
        {
            int tmp = isbn[i] - '0';
            num.push_back(tmp);
        }
    }

    long shibiema = 0;

    for (int i = 0; i < 9; i++)
    {
        shibiema += num[i] * (i + 1);
    }

    // 如果等于11应该输出 X
    if (shibiema % 11 == 10)
    {
        if (isbn[12] == 'X')
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << isbn.substr(0, 11) << "-X" << endl;
        }
    }
    else
    {
        if ((isbn[12] - '0') == shibiema % 11)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << isbn.substr(0, 11) << "-" << to_string(shibiema % 11) << endl;
        }
    }

    return 0;
}