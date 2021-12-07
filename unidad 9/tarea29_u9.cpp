#include <iostream>

int main()
{
    int array[5]{9,7,5,3,1}

    std::cout << "elementos 0 has addres:" << &array[0] << '/n';

    std::cout << "la matriz decae para almacenar una doreccion de memoria:" << array << '/n';

    return 0;
}