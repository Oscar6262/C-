#include <iostream>
#include <string view>

int main()
{
    std::string_view str {"los trenes son rapidos"};

    std::cout << str.length() << '/n';
    std::cout << str.substr(0, str.find(' ')) << '/n';
    std::cout << (str == "los trenes son rapidos") << '/n';

    std::cout << str.start_with("botes") << ' /n';
    std::cout << str.ends_with("rapidos") << '/n';

    std::cput << str << '/n';
    
    return 0;
}