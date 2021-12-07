#include <ostream>
void passarray(int value)
{
    value = 99;

}
void pasarray(int prime[5])
{
    prime[5] = 11;
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 3;
}
int main()
{
    int value{1};
    std::cout << "antes de passvalue :" << value << '/n';
    passvalue(value);
    std::cout << "despues de passvalue" << value << '/n';

    int primeprime[5]{2,3,5,7,11};
    std::cout << "antes de passrray" << primerprime[0] << " " << primeprime[1] << " " << primeprime[2] << " "
    << primeprime[3] << " " << primeprime[4] << '/n';
    passarray(prime);
    std::cout << "despues de passarray" << primerprime[0] << " " << primeprime[1] << " " << primeprime[2] << " "
    << primeprime[3] << " " << primeprime[4] << '/n';

    return 0;
    
}