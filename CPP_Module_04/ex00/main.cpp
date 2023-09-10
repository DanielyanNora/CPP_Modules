#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << "j type: " << j->getType() << " " << std::endl;
    std::cout << "i type: " << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout << "This is WrongAnimal testing" << std::endl;
    
    const WrongAnimal *wAnimal = new WrongAnimal();
    const WrongAnimal *wCat = new WrongCat();

    std::cout << "WrongCat type: " << wCat->getType() << " " << std::endl;
    wCat->makeSound();
    wAnimal->makeSound();

    delete wAnimal;
    delete wCat;

    return 0;
}