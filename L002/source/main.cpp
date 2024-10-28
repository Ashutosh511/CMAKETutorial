#include<iostream>
#include<concepts>

template <typename T>
requires std::integral<T>
T add(T num1, T num2)
{
    return num1+num2;
}

int main(int argc, char *argv[])
{
    std::cout<<"Hello from c++ 20 with cmake\n";
    std::cout<<"The Sum of add(4,5) is:  "<<add(4,5)<<"\n";
}
