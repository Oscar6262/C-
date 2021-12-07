#include <iostream>
 int main()
 {
     int sum{0};
     for(int cout{0}; cout < 10; ++cout)
     {
        std::cout << "ingrese un numero a sumar o 0 para salir ";
        int main{};
        std::cin >> num;
        if(num == 0)
          break;
        sum += num;

     }
     std:cout << "la suma de todos los numeros ingresados es " << sum << "/n";
     return 0;

 }