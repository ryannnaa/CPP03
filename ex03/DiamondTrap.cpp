#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
    : ClapTrap("NoName_clap_name"), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default " << this->getName() << " has been constructed" << std::endl;
    this->name = "NoName";
    setHp(FragTrap::getHp());
    setEp(ScavTrap::getEp());
    setAd(FragTrap::getAd());
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap " << this->getName() << " has been constructed" << std::endl;
    this-> name = name;
    setHp(FragTrap::getHp());
    setEp(ScavTrap::getEp());
    setAd(FragTrap::getAd());
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(), FragTrap()
{
    std::cout << "Copy of DiamondTrap " << other.getName() << " constructed" << std::endl;
    setName(other.getName());
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "Copy assignment of DiamondTrap " << other.getName() << " called" << std::endl;
    if (this != &other)
    {
        setName(other.getName());
        setHp(other.getHp());
        setEp(other.getEp());
        setAd(other.getAd());
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->getName() << " has been destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is: " << this->name << " and my ClapTrap name is: " << ClapTrap::getName() << std::endl;
}