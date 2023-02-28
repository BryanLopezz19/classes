//
// Created by Bryan Lopez on 2/21/23.
//

#include "functions.h"

bool isPalindrome(std::string phrase)
{
    char *begin;
    char *end;

    begin = &phrase[0];
    end = &phrase[0] + phrase.length()-1;



 while(begin < end)
 {
    if(*begin != *end)
    {
        return false;
    }
    else
     return true;
 }
    begin++;
    end--;
}