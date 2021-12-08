#include <fstream>
#include <iostream>

int main()
{
    std::ofstream outf{"Sample.dat"};
    if (!outf)  
    {
        
        std::cerr << "Uh oh, Sample.dat no puede ser abierto en modo escritura!" << std::endl;
        return 1;
    }
    outf << "Esta es la linea 1" << '\n';
    outf << "Esta es la linea 2" << '\n';

    return 0;
    
}