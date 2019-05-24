#include "Person.hpp"

Person::Person()
{
}

Person::~Person()
{

}

std::string Person::getName(std::string name)
{
    return this->_name = name;
}