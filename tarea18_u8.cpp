#include <iostream>

int breakorreturn()
{
    while(true)
    {
        
    
    char ch;
    std::con >> ch;

    if (ch == 's')
        break;
    if (ch == 'r')
  
      return 1;
      
    } 
    std::cout << "nos salimos de ciclo'/N'";
    return 0;

}
int main()
{
    int returnvalue {breakreturn()};
    std::cout << "funtion breakreturn regreso " << retrunvale << '/n';
    return 0;
}