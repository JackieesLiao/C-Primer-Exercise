#include<iostream>
#include<vector>
void print(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
    if (begin != end)
        std::cout << *begin << " ";
    print(++begin, end);
}
int main()
{
    std::vector<int> vec{ 5,7,8,3443,222 };
    print(vec.cbegin(), vec.cend());
    return 0;
}
