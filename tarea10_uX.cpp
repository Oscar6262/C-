#include <iostream>
#include <iomanip>
int main()
{
    std::cout.setf(std::ios::showpos | std::ios::uppercase);  
    std::cout << 20 <<'\n';
    std::cout.unsetf(std::ios::showpos | std::ios::uppercase);  
    std::cout << 37 <<'\n';
    std::cout.setf(std::ios::hex);      
    std::cout.unsetf(std::ios::dec); 
    std::cout << 27 <<'\n';
    std::cout.setf(std::ios::dec);
    std::cout << 27 <<'\n';
    std::boolalpha;     


    std::cout << -12345 << '\n';
    std::cout << std::setw(10) << -12345 << '\n';
    std::cout << std::setw(10) << left << -12345 << '\n';      
    return 0;
}