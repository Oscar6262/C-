#include <cstdint>
#include <iostream>
int main()
{
    std::int16_t x{};
    std::cout << "ingrese un numero ";
    estd::cin >> x;

    std::int16_t y{};
    std::cout << "ingresa otro numero entre";
    std::cin >> y;
    
    std::cout << "la suma es" << x + y << '/n';
    return 0;
}