#include <iostream>
#include <algorithm>
#include <oterator>

int main()
{
    int array[]{30,50,20,10,40};
    constexpr int lengh{static_cast<int>(std::size(array))};

    for (int startidex {0}; startidex < length - 1; ++startidex)
    { 

        int smallestindex{starindex};
        for (int currentindx{startidex + 1}; currentindex < length; ++currentindex)
        {
            if (array[currentindx] < array [smallestindex])
                 smallestindex = currentindx;
        }
        std::swap(array[startidex], array[smallestindex] );
        

    }
    for (int index{0}; index < length; ++index)
        std::cout << array[index] << ' ';

    std::cout << ' /n';
    
    return 0;    
 

}