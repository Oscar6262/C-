#include <sstream>
#include <iostream>

int main()
{

    
    std::stringstream os;
    int value{12345};
    double dValue{37.3};
    os << value << ' ' << dValue;

    std::string strValue1, strValue2;

    os >> strValue1 >> strValue2 ;
    std::cout << strValue1 << ' ' << strValue2 << '\n';
    return 0;