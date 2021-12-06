#include "constans.h"
#include <iostream>

double getinitialheight()
{
    std::cout << "ingrese la altura de la torre en metros: ";
    bouble initialheight{}; std::cin >> initialheight; return initialheight;

}
double calculateheight(double initialheight, int secondspassed)
{
    double distancefallen {(myconstants::gravity * secondspasses * secondspassed)/2.0};
    double currentheight {initialheight - distancefallen }; return currenthight;

}
void printheight(double height, int seconds passed)
{
    if(height >0.0){
        std:cout << "en" << secondspassed << "segundos, la pelota esta ala altura de:" << height << "metros";

    }
}
void calculateandprintheight(double initialheight, int secondspaseed)
{
    double height {calculateheight(initialheight,secundspaseed)}; printheight(height,secondspaseed;)

}
int main()
{
    const double initialheight { getinitialheight()};
    calculateandprintheight(initialheight,0)
    calculateandprintheight(initialheight,1)
    calculateandprintheight(initialheight,2)
    calculateandprintheight(initialheight,3)
    calculateandprintheight(initialheight,4)
    calculateandprintheight(initialheight,5)
    return 0;
}