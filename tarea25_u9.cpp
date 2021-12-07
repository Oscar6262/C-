#include <iostream>
int main()
{
    int v {5};
    int *ptr {&v};

    std::cout <<&v << '/n';
    std::cout << ptr << '/n';

    return 0; 
}