#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const std::string &type)
{
    this->type = type;
    std::cout << "Animal constructor with parameter" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    this->type = copy.type;
    std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    this->type = copy.type;
    return (*this);
}

const std::string &Animal::getType() const
{
    return(this->type);
}

void Animal::makeSound() const
{
    std::cout << " Animal sound. " << std::endl;
}