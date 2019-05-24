#include "Cat.hpp"
#include <iostream>

 Cat::Cat(/* args */)
 {
 }
 
 Cat::~Cat()
 {
 }
 void Cat::speak()
 {
     std::cout << "MEowwwwwww!!!!!" << std::endl;

 }
  bool Cat::emotion()
 {
    if (this->happy)
        std::cout << "Purrrrrrr!!!!!" << std::endl;
    else
    {
        std::cout << "reeeek!!!!!" << std::endl;
    }
 }

 void Cat::setEmotion(std::string condtion){
     if (condtion == "true")
        this->happy = true;
    else{
        this->happy = false;
    }
 }