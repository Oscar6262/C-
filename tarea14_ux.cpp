#include <fstream>
#include <iostream>

int main()
{
    std::ofstream outf{"Sample.dat"};
    outf << "This is line 5"<< '\n' ;
    outf.close();

    outf.open("Sample.dat", std::ios::app);
    outf << "This is line 6" << '\n';
    outf.close();
    return 0;
}