#ifndef _CAT_H_
#define _CAT_H_

#include <string>

 class Cat
 {
 private: 
    bool happy;
 public:
    Cat();
    ~Cat();
    void speak();
    bool emotion();
    void setEmotion(std::string condition);
 };
#endif