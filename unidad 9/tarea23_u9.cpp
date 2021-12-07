#include <iostream>
 #include <itertor>
 #include <string_view>
 #include <cstring>

 int main()
 {
     std::string_view sv{"pelota"};

     sv.remove_suffix(3);

     std::string str{ sv };

     auto sznullterminated{ str.c_str() };

     std::cout << str << "tiene " << std::strlen(sznullterminated) << "letra(s)/n";

     return 0;
 }