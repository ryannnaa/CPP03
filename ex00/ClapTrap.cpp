#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
    : name("NoName"), hp(10), ep(10), ad(0)
{
    std::cout << "ClapTrap " << name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hp(10), ep(10), ad(0)
{
    std::cout << "ClapTrap " << name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name), hp(other.hp), ep(other.ep), ad(other.ad)
{
    std::cout << "Copy of ClapTrap " << other.name << " constructed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment of ClapTrap " << other.name << " called" << std::endl;
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
{
    std::cout << "ClapTrap " << name << " has been destroyed" << std::endl;
}

const std::string& ClapTrap::getName() const
{
    return (name);
}

unsigned int ClapTrap::getHp() const
{
    return (hp);
}

unsigned int ClapTrap::getEp() const
{
    return (ep);
}

unsigned int ClapTrap::getAd() const
{
    return (ad);
}

void ClapTrap::setName(const std::string& name)
{
    this->name = name;
}

void ClapTrap::setHp(const unsigned int amount)
{
    this->hp = amount;
}

void ClapTrap::setEp(const unsigned int amount)
{
    this->ep = amount;
}

void ClapTrap::setAd(const unsigned int amount)
{
    this->ad = amount;
}

void ClapTrap::attack(const std::string& target)
{
    if (!hp || !ep)
        return ;
    ep -= 1;
    std::cout << "ClapTrap " << name << " attacks " << target
        << ", causing " << ad << " points of damage!" << std::endl
        << "Remaining energy points: " << ep << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > hp)
        amount = hp;
    hp -= amount;
    std::cout << "ClapTrap " << name << " has taken " << amount << " points of damage!" << std::endl
        << "Remaining health points: " << hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!hp || !ep)
        return ;
    hp += amount;
    ep -= 1;
    std::cout << "ClapTrap " << name << " has been repaired for " << amount << " points of health!" << std::endl
        << "Remaining energy points: " << ep << std::endl << "Total health points: " << hp << std::endl;
}