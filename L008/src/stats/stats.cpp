#include "supermath.h"
#include "stats.h"

double mean(int * values, int count)
{
    int sum = 0;
    for(int i = 0; i < count; i++)
    {
        sum = add(sum, values[i]);
    }

    return (double) (sum/count);
}