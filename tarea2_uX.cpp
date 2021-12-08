#include <sstream>
#include <iostream>

int main()
{

  
    std::stringstream os;
    os << "123423 53.34";
    int nValue;
    double dValue;

    
    os >> nValue >> dValue;
    std::cout << nValue << ' ' << dValue << '\n';
    return 0;
}