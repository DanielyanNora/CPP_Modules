#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal("Cat")
{
    *this = copy;
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    this->type = copy.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "not meow" << std::endl;
}