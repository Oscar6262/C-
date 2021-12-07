#include <iostream>

void printsize(int array[])
{
    std::cout << sizeof(array) << '/n';
}

int main()
{
    int array[]{1,1,2,3,5,8,13,21};
    std::cout << sizeof(array) << '/n';
    printsize(array);

    return 0;
    
}