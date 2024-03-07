# Day1 总结

1. 关闭标准输入输出流

   ```c++
   ios::sync_with_stdio(0);
   cin.tie(0)
   cout.tie(0);
   ```

2. 存在可重复元素的集合`multiset`

   ```c++
   //构造函数
   multiset<int> st;
   //插入函数
   st.insert(1);
   st.erase(1);
   ```

3. 矩阵的操作

   ```c++

   //实现矩阵乘法
   /**
    * 定义一个结果矩阵res，循环结束后保存结果矩阵
   */
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
   ```

   ```c++

   
