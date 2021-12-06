#include <iostrea>
enum class color
{
    black,
    white,
    red,
    green,
    blue,

}
void printcolor(color olor)
{
    if(8color ==color::black)
      std::cout << "black";
    else if(color == color::white)
     std::cout << "white";
    else if(color == color::red)
     std::cout << "red";
    else if(color == color::green)
     std::cout << "green";
    else if(color == color::blue)
     std::cout << "blue";
    elsestd::cout << "desconocido";


}
int main()
{
    printcolor(color::green);
    return 0;
}