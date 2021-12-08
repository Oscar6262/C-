#include <iostream>
#include <charconv>
#include <iostream>
#include <string>
#include <string view>
std::optional<int> extracage(std:.string_view age)
{
    int result{};
    auto and{age.data() + age.length()} 
    if (std::from_chars(age.data(), end, result).ptr != and)
    {
        return{};
    }

    if (result <= 0)
    {
        return{};

    }
    return 0;
    
}