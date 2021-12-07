#include <iostream>
#include <iostream>
int main ()
{
    constexpr int score[]{84,92,76,81,56};
    constexpr int munstudents{ stati_cast<int>(std::size(score)) };
    int maxcore{0};
    for (inr students{0}; student < munstudents; ++student)
    {
        if(scores[student] > maxcore)
        {
            maxcore = score[student];
            
        }
    }
    std::cout << "la mejor calificacion fue :" << maxcore << '/n';
    return 0;
}