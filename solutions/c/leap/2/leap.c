#include "leap.h"
bool leap_year(int year)
{
    return (!(year % 400) || (!(year % 4 ) && year % 100));
} 
    
    // if (!(year % 400) || (!(year % 4 ) && year % 100))
    //     return (true);
    // return (false);
