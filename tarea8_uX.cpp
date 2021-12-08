#include <sstream>
#include <iostream>

int main()
{

    
    std::stringstream os;
    os << "Hola  :)";
    os.str("");                             
    os.clear();                                        
    os << "Hola  :(";
    std::cout << os.str();                  
    return 0;
}