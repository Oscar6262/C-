#include <iostream>
int main()
{
    int cout{0};
    while(cout < 10)
    {
        std::cout << cout << ' ';
        ++cout;
    }
    std::cout << " listo?";
    return 0;
}