#ifndef DOG_H
#define DOG_H
#include<iostream>
#include<string>

class Dog
{
    public:
        explicit Dog(std::string name);
        Dog() = default;
        ~Dog();
        std::string get_name() const;
        void set_name(const std::string name);
        void print_info();

    private:
        std::string dog_name = "tison";

        
};




#endif