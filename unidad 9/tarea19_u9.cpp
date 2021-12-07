#include <iostream>
#include <string view>
int man()
{
    std::string_view str{"manzana"};
    
    std::cout << str < '/n';

    str.remove_prefix(1);

    std::cout << str << '/n';
    
    str.remove_siffix(2);

    std::cout << str << '/n';
    return 0;
    
}