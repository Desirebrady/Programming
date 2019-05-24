#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>

class Person{
    private:
        std::string _name;

    public:
        Person();
        ~Person();
        std::string getName(std::string name);
};

#endif // !_PERSON_H_
