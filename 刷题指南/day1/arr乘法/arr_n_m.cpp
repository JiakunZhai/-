#include <iostream>
// #include <string>
#include <vector>

using namespace std;
// #define PI 3.14159265358979323

// 矩阵乘法函数
vector<vector<int>> arrchengfa(const vector<vector<int>> &arrA, const vector<vector<int>> &arrB)
{
    int size = arrA.size();

    vector<vector<int>> res(size, vector<int>(size, 0));

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                res[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }

    return res;
}

// 实现矩阵的m次幂
vector<vector<int>> arrMcimi(const vector<vector<int>> &arr, const int m)
{
    int size = arr.size();
    // 创建结果方阵
    vector<vector<int>> res(size, vector<int>(size, 0));

    // 将结果方阵初始化为单位阵
    for (int i = 0; i < size; i++)
    {
        res[i][i] = 1;
    }

    // 如果为0次幂直接返回一个单位阵
    if (m == 0)
    {
        return res;
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            res = arrchengfa(arr, res);
        }

        return res;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int num;

    vector<vector<int>> arr(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            arr[i][j] = num;
        }
    }

    vector<vector<int>> res(n, vector<int>(n, 0));

    res = arrMcimi(arr, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j];
            if (j < n - 1)
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
