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
protected:
    void setName(const std::string& input);
    void setHp(const unsigned int amount);
    void setEp(const unsigned int amount);
    void setAd(const unsigned int amount);
public:
    ClapTrap();
    ClapTrap(const std::string& input);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    const std::string& getName() const;
    unsigned int getHp() const;
    unsigned int getEp() const;
    unsigned int getAd() const;
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif