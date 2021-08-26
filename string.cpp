#include <iostream>
#include <string>
//size_type、difference_type是容器概念，没有容器不能使用，
//它在不同的机器上，长度是可以不同的，并非固定的长度，足够保存两个迭代器之间的距离。为什么足够？
int main()
{
    std::string str = "hello word";
    std::string::size_type pos = str.find(" "); //size_type是无符号整数类型。
    std::string str1 = str.substr(pos+1,str.size());
    std::string str2 = str.substr(0, pos);
    std::cout << str1 + " " + str2+"\n";
    std::string::difference_type distance = str.find("r") - str.find("e");//difference_type带符号整数类型
    std::cout << distance << std::endl;
}
