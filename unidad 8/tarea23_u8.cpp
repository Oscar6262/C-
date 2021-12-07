 # include <iosream>

 double gatdouble()
 {
   while(true)
   {
       std::cout << "ngresa un valor double :";
       double x{};
       std::cin >> x;
       
       if(std::cin.fail())
       {
           std::cin.clear();
           std::cin.ignore(32767,'/n?');
           std::cout << "oops, ingreso no valido , intente de nuevo";

       }
       else
       {
           std::cin.ionore(32767,'/n');
           return x;

       }
   }
  

 }