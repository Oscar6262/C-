#include <iostrea>

struct employee
{
    short id;
    int age;
    double wage;

}
void printinformation(employe employe)
{
    std::cout << "id:  " << employee.id << "/n";   
    std::cout << "age:  " << employee.age << "/n";   
    std::cout << "wage:  " << employee.wage << "/n";   
}
int main()
{
    employee joe {14, 32, 24.15};
    employee maria {15,28,18.27}
    printinformation(joe);
    std::cout <<"/n";
    return 0;
}