#include "dog.h"
#include<iostream>

Dog::Dog(std::string name):dog_name(name)
{
    std::cout<<"Constructor for dog " <<dog_name<<" called \n";
}

Dog::~Dog()
{
    std::cout<<"Destructor for dog "<< dog_name<<" called \n";
}

std::string Dog::get_name() const
{
    return dog_name;
}

void Dog::set_name(const std::string name)
{
    dog_name = name;
}

void Dog::print_info()
{
    std::cout<<"Dog [ name: "<< dog_name<<" ]"<<std::endl;
}
