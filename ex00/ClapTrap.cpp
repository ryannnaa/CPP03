#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
    : name("No Name"), hp(10), ep(10), ad(0)
{}

ClapTrap::ClapTrap(std::string const name)
    : name(name), hp(10), ep(10), ad(0)
{}

ClapTrap::ClapTrap(ClapTrap& const other)
    : name(other.name), hp(other.hp), ep(other.ep), ad(other.ad)
{}

ClapTrap& ClapTrap::operator=(ClapTrap& const other)
{
    if (this != &other)
    {
        name = other.name;
        hp = other.hp;
        ep = other.ep;
        ad = other.ad;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{}

void ClapTrap::attack(std::string& const target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{
    
}