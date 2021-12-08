#include <iomanip>
#include <iostream>



int main()
{
    char buf[10];
    std::cin >> std::setw(10) >> buf;       
    std::cout << buf;

    
    char strBuf[11];
    std::cin.get(strBuf, 11);        

    char strBuf2[100];
    std::cin.getline(strBuf2, 100);
    std::cout << strBuf2 << '\n';
    std::cout << std::cin.gcount() << " caracteres fueron leidos" << std::endl; // gcount sirve para contar los caracteres extraidos por la ultima llamada de getline()

    return 0;
}