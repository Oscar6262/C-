#include <iostream>
#include<cstddef>
void dosmething(std::nullptr_t ptr)
{
    std::cout << "dentro de dosomething()/n";
}

int main()
{
    dosomething(nullptr);

    return 0;
}