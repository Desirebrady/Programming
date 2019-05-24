#include <conio.h>
#include <iostream>
#include <string>

class Person
{
private:
    /* data */
public:
    std::string name;
    int age;
    Person(std::string name, int age);
    ~Person();
    void speak();
};

Person::Person(std::string name, int age): name(name), age(age)
{
}

Person::~Person()
{
}

void Person::speak()
{
    std::cout << "My name is " << this->name << std::endl;
    std::cout << "I am " << this->age << " years old" << std::endl;
}

int main()
{
    Person p1("Desire", 21);
    p1.speak(); //calling speak through object

    void (Person::*func)(void) = &Person::speak;
    Person *p = &p1; // calling speak through pointer to function
    (p->*func)();
}
