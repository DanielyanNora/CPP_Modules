#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal("Cat")
{
    *this = copy;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &ob)
{
    this->type = ob.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}