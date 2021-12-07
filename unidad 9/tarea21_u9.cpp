#include <iostream>
 #include <itertor>
 #include <string_view>
 

 std::string_view askforname()
 {
     std::cout << "cual es tu nombre?/n";

     std::string str{};
     str::cin >>str;

     std::string_view view{str};

     std::cout << "hola" << view << '/n';

     return view;
 }
 int main()
 {
     std::string_view view{askforname()};

     std::cout << "tu nombre es " << view << '/n';

     return 0;
 }