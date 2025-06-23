#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
    std::cout << "FragTrap default " << this->getName() << " has been constructed" << std::endl;
    setHp(100);
    setEp(100);
    setAd(30);
}

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap " << this->getName() << " has been constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
    : ClapTrap(other)
{
    std::cout << "Copy of FragTrap " << other.getName() << " constructed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "Copy assignment of FragTrap " << other.getName() << " called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->getName() << " has been destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (!getHp() || !getEp())
        return ;
    setEp(getEp() - 1);
    std::cout << "FragTrap " << this->getName() << " attacks " << target
        << ", causing " << this->getAd() << " points of damage!!" << std::endl
        << "Remaining energy points: " << this->getEp() << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->getName() << " wants a high-five ✋" << std::endl;
}