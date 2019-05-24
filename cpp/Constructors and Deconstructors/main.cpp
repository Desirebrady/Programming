#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "program executing" << std::endl;
    {
    Cat cat;
    cat.speak();
    cat.setEmotion("false");
    cat.emotion();
    }
    std::cout << "----------------------" << std::endl;
    {
    Cat cat1;
    cat1.speak();
    cat1.setEmotion("true");
    cat1.emotion();
    }
    std::cout << "program terminating" << std::endl;

    return (0);
}