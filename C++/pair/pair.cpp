#include <iostream>

using namespace std;

int main(){

    //构造函数（c++11之后支持）
    pair<int, int> p1 = {1, 2};
    //c++98之后支持
    pair<int, int> p2 = make_pair(1, 2); 

    /**
     * 不只是
    */
    
    //判断两个二元组是否相等
    if (p1 == p2)
    {
        cout << "yes" << endl;
    }
    
}