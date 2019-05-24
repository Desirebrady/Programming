#include "Cat.hpp"
#include <iostream>

int main()
{
    Cat cat;
    cat.speak();
    cat.setEmotion("false");
    cat.emotion();
    
    Cat cat1;
    cat1.speak();
    cat1.setEmotion("true");
    cat1.emotion();

    return (0);
}