#include <iostream>
#include <algorithm>

int main()
{
    int x{2};
    int y{4};

    srd::cout << "antes del intercambio x = " << x << " y =" << y << '/n';
    srd::swap(x, y);
    std::cout << "despues de intercambio:" << x << " y = " << y << '/n';
    
    return 0;
}