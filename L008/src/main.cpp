#include <iostream>
#include <vector>
#include "stats.h"
#include"supermath.h"


int main(int argc, char ** argv)
{
    std::vector<int> v = {5,7, 15, 9};

    int avg = mean(v.data(), v.size());
    std::cout<< "Mean :"<<avg<<std::endl;
}