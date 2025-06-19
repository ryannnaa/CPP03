#include "FragTrap.hpp"
#include <iostream>

int main()
{
    FragTrap a;
    std::cout << std::endl << "[ FragTrap a ]" << std::endl << a.getName() << " has " << a.getHp() << " hit points left" 
        << std::endl << a.getName() << " has " << a.getEp() << " energy points left" << std::endl
        << a.getName() << " has " << a.getAd() << " attack damage" << std::endl << std::endl;
    
    FragTrap b("Beta");
    std::cout << std::endl << "[ FragTrap b ]" << std::endl << b.getName() << " has " << b.getHp() << " hit points left" 
        <<std::endl << b.getName() << " has " << b.getEp() << " energy points left" << std::endl
        << b.getName() << " has " << b.getAd() << " attack damage" << std::endl << std::endl;
    
    a.attack("Beta");
    std::cout << std::endl;

    b.takeDamage(30);
    std::cout << std::endl;

    FragTrap c(b);
    std::cout << std::endl;

    b.beRepaired(15);
    std::cout << std::endl;

    std::cout << "FragTrap b: " << b.getName() << " has " << b.getHp() << " hit points left" << std::endl;
    std::cout << "FragTrap c: " << c.getName() << " has " << c.getHp() << " hit points left" << std::endl;
    std::cout << std::endl;

    a.highFivesGuys();
    b.highFivesGuys();
    c.highFivesGuys();
    std::cout << std::endl;

    return (0);
}