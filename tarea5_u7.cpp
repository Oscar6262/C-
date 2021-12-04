#include <iostream>
#include <string>
int main()
{
    std::string str {"el arroz se esta cocinando" };
    str.erase(4,11);

    std::cout << str << "/n";
    return 0;
}