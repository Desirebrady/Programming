
#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    std::cout << "A cat created" << std::endl;
}

Cat::~Cat()
{
}

void Cat::speak(){
    std::cout << "Meooooow!!!" << std::endl;
}