#include <iostream>
 #include <itertor>
 #include <string_view>

 void print(std::string s)
 {
     std::cout << s << '/n';
 }

 int main()
 {
     std::string_view sc{"pelota"};
     sv.remove_siffix{3};

     std::string str{sv};

     print(str);

     print(static_cast<std::string>(sv));
     return 0;
 }