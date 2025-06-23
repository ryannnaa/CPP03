#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
    : ClapTrap()
{
    std::cout << "ScavTrap " << this->getName() << " has been constructed" << std::endl;
    setHp(100);
    setEp(50);
    setAd(20);
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap " << this->getName() << " has been constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other)
{
    std::cout << "Copy of ScavTrap " << other.getName() << " constructed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Copy assignment of ScavTrap " << other.getName() << " called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->getName() << " has been destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!getHp() || !getEp())
        return ;
    setEp(getEp() - 1);
    std::cout << "ScavTrap " << this->getName() << " attacks " << target
        << ", causing " << this->getAd() << " points of damage!!" << std::endl
        << "Remaining energy points: " << this->getEp() << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode." << std::endl;
}