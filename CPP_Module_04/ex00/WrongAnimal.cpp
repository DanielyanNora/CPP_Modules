#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
    this->type = type;
    std::cout << "WrongAnimal constructor with parmeter" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    this->type = copy.type;
    std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    this->type = copy.type;
    return (*this);
}

const std::string &WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "wrong animal sound." << std::endl;
}