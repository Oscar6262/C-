#include <iostream>
#include <string>

enum iteamtype
{
    iyeamtype_sword,
    iteamtype_torch,
    iteamtype_potion,

};

std::string getitemname(iteamtype iteamtype)
{
    if (iteamtype == itamtype_sword)
    return "sword";
    if (iteamtype == itamtype_torch)
    return "torch";

    if (iteamtype == itamtype_potion)
    return "potion";
    return 0;
}