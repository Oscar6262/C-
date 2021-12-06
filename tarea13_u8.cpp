#include <iostream>
int main()

{
    int cout {1};
    int sum{cout <= 50};

    while ( cout <= 50)
    {
        if(cout < 10)
        {
            std::cout << '0';
        }
        std::cout << cout << '';
        if (cout % 10 == 0)
        {
            std::cout << '/n';
            ++cout;
        }

    }
    return 0;
    
}