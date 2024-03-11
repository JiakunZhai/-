# day3总结

## 1. 转换字母大小写的方式

- 判断字母是大写还是小写

  在`<sting>`头文件中提供了`isupper()`,`islower()`函数

  ````cpp
  #include <iostream>
  #include <string>
  #include <cctype> // 包含头文件以使用 toupper 函数
  using namespace std;
  
  int main() {
      string str = "hello World";
      
      for (char &c : str) {
          if (islower(c)) { // 检查字符是否为小写字母
              c = toupper(c); // 转换为大写字母
          }
      }
      
      cout << str << endl; // 输出转换后的字符串
      
      return 0;
  }
  
  ````

- `tolower` `toupper`

  将`char`类型的字符转换大写或者小写,具体的例子和上面的一致

## 2. **`transform`函数详解**

包含在头文件``#include<algorithm>``

在 C++ 标准库中，`transform` 函数用于对容器中的元素进行转换操作，并将结果存储在另一个	容器中。这个函数通常与迭代器配合使用。

`std::transform` 函数接受四个参数：

- 第一个和第二个参数是待转换序列的起始和结束迭代器。
- 第三个参数是目标容器的插入迭代器，用于存储转换后的结果。
- 第四个参数是一个函数或者函数对象，定义了对源容器中每个元素的转换操作。

下面是一个具体的例子：

````cpp
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination;

    // 对 source 中的每个元素进行平方操作，结果存储在 destination 中
    std::transform(source.begin(), source.end(), std::back_inserter(destination),
                   [](int x) { return x * x; });

    // 输出 destination 中的元素
    for (int value : destination) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}

````

在上面的例子中，Lambda 表达式 `[](int x) { return x * x; }` 定义了对每个元素进行平方操作，然后 `std::transform` 将这个操作应用到 `source` 容器的每个元素上，将结果存储在 `destination` 容器中。

`std::transform` 函数要求目标容器有足够的空间来存储转换后的结果，因此在上面的例子中我们使用了 `std::back_inserter` 插入迭代器来实现动态扩展目标容器。（在`vector`数组中可以使用头迭代器来来实现插入功能）

## 3. find函数详解

`find`函数用于在容器中查找指定元素（特定值的第一个出现位置），并返回指向该元素的迭代器，如果未找到指定元素，则返回指向容器末尾的迭代器。（对于`string`来说，返回的是`string::npos`）

`find`函数接收三个参数

- **开始迭代器（InputIterator first）**：指向容器中要查找范围的起始位置的迭代器*一般默认为`begin()`*
- **结束迭代器（InputIterator last）**：指向容器中要查找范围的结束位置的迭代器，**`find` 将在这个位置之前停止查找，不包括该位置**
- **目标元素（const T& value）**：在容器中查找的目标元素的值。`std::find` 将在指定范围内查找与该值相等的元素。

下面是一个具体的例子，在字符串`s`中查找`t`子串

````cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s, t;
    getline(cin, t);
    getline(cin, s);

    auto it = s.find(t);

    if (it != string::npos)
    {
        cout << "yes" << endl;
    }

    return 0;
}
````

````cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {2, 4, 6, 8, 10};

    // 在 vector 中查找元素 6
    auto it = std::find(numbers.begin(), numbers.end(), 6);

    if (it != numbers.end()) {
        std::cout << "Element found at index: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}

````

## 4. distance迭代器计算距离（不能相减的迭代器距离计算）

`std::distance` 函数来计算两个迭代器之间的距离。这个函数接受两个迭代器作为参数，并返回它们之间的元素个数（距离）

````cpp
#include <iostream>
#include <vector>
#include <iterator> // 包含 distance 函数所需的头文件

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // 获取第一个和最后一个元素的迭代器
    std::vector<int>::iterator first = vec.begin();
    std::vector<int>::iterator last = vec.end();

    // 使用 distance 函数计算两个迭代器之间的距离
    int dist = std::distance(first, last);

    std::cout << "Distance between first and last element: " << dist << std::endl;

    return 0;
}

````

