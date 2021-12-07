#include <iostream>
{
    constexpr int numrows {10};
    constexpr int numcols{10};
    int product[numrows][numcols]{};

    for (int row{1}; row < numrows; ++row)
    {
        for (int col{1}; col < numcols; ++cul)
        {
            product[row][col]= row * col;
        }
    }
    for (int row{1}; row < numrows; ++row)
    {
        for(int col{1}; col < numcols; ++col)
        {
            std::cout << product[row][col] << '//n';
        }
        std::cout << '/n';

    }
    return 0;
    
}