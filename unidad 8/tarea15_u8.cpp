#include <iostream>
int main()

{
    int selection;
    do{
        std::ciut << "por favor seleccione una opcion: '/n";
        std::cout <<"1 suma'/N'";
        std::cout << "2resta";
        std::cout << "3 multiplicacion";
        std::cour << "4 divicion";
        std::con >> seleccion;
    }
    while(selection != 1 && selection !=2 &&
          selection !=3 && selection !=4);
    std::cout <<"seleccionaste ña opcion #" << selection << '/n';
    return 0;
          
}