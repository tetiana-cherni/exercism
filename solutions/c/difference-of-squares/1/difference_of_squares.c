#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
    unsigned int    result;
    unsigned int    i;

    result = 0;
    i = 1;
    while (i <= number)
    {
        result += i * i;
        i++;
    }
    return (result);
}

unsigned int square_of_sum(unsigned int number)
{
    unsigned int    result;
    unsigned int    i;

    result = 0;
    i = 1;
    while (i <= number)
    {
        result += i;
        i++;
    }
    return (result * result);
}

unsigned int difference_of_squares(unsigned int number)
{
    return (square_of_sum(number) - sum_of_squares(number));
}
