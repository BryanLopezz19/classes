#include <iostream>
#include <string>
#include "functions.h"

int main()
{
    std::string phr;
    phr = "taco cat";

    std::string phr2;
    phr = "taco hat";

    std::cout << isPalindrome(phr) << std::endl;

    std::cout<<isPalindrome(phr2)<<std::endl;
    return 0;
}
