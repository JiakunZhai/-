# day2

1. 将一个`char`数字字符转换为对应的数字

   根据$ASCⅡ$码的约定`'0'`字符所对应的码值为48，两个数字字符相减就可以得到对应的数字

   ````c++
   //eg
   char a = '9', b = '7';
   cout << a - '0' << "	" << b - '0' << endl;
   ````

   

2. `getline`读取一整行字符串

   ````cpp
   //getline接受的参数
   
   std::basic_istream<_Elem, _Traits> & getline<_Elem, _Traits, _Alloc>(std::basic_istream<_Elem, _Traits> &&_Istr, std::basic_string<_Elem, _Traits, _Alloc> &_Str)l
   getline();
   ````

   

   **使用`getline`分割字符串**

   在 C++ 中，没有内置的直接方法来按特定字符（如“-”）分割字符串，但你可以通过一些简单的代码来实现这个功能。以下是一个示例，展示了如何使用 `std::istringstream` 和 `std::getline` 来按照“-”字符分割一个字符串：

   ```
   cppCopy Code#include <iostream>
   #include <sstream>
   #include <vector>
   #include <string>
   
   int main() {
       // 待分割的字符串
       std::string str = "part1-part2-part3";
   
       // 用来存储分割后的字符串片段
       std::vector<std::string> tokens;
       
       // 创建一个字符串流
       std::istringstream strStream(str);
       std::string token;
   
       // 使用 getline 分割字符串
       while (std::getline(strStream, token, '-')) { // '-' 作为分隔符
           tokens.push_back(token);
       }
   
       // 输出结果
       for (const auto& t : tokens) {
           std::cout << t << std::endl;
       }
   
       return 0;
   }
   ```

   在这个例子中，我们首先定义了一个包含“-”作为分隔符的字符串 `str`。然后，我们创建了一个 `std::istringstream` 对象 `strStream`，它基于 `str`。使用 `std::getline` 函数逐个读取由“-”分隔的子字符串，并将它们存储到 `tokens` 向量中。注意，在调用 `std::getline` 时，我们传递了分隔符“-”作为第三个参数。

3. `continue`关键字

   控制循环



