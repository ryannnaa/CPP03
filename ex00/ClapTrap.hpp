#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
    std::string name;
    unsigned int hp;
    unsigned int ep;
    unsigned int ad;
public:
    ClapTrap();
    ClapTrap(std::string const name);
    ClapTrap(ClapTrap& const other);
    ClapTrap& operator=(ClapTrap& const other);
    ~ClapTrap();

    void attack(std::string& const target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif