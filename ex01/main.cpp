#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    ScavTrap a;
    std::cout << std::endl << "[ ScavTrap a ]" << std::endl << a.getName() << " has " << a.getHp() << " hit points left" 
        << std::endl << a.getName() << " has " << a.getEp() << " energy points left" << std::endl
        << a.getName() << " has " << a.getAd() << " attack damage" << std::endl << std::endl;
    
    ScavTrap b("Beta");
    std::cout << std::endl << "[ ScavTrap b ]" << std::endl << b.getName() << " has " << b.getHp() << " hit points left" 
        <<std::endl << b.getName() << " has " << b.getEp() << " energy points left" << std::endl
        << b.getName() << " has " << b.getAd() << " attack damage" << std::endl << std::endl;
    
    a.attack("Beta");
    std::cout << std::endl;

    b.takeDamage(20);
    std::cout << std::endl;

    ScavTrap c(b);
    std::cout << std::endl;

    b.beRepaired(15);
    std::cout << std::endl;

    std::cout << "ScavTrap b: " << b.getName() << " has " << b.getHp() << " hit points left" << std::endl;
    std::cout << "ScavTrap c: " << c.getName() << " has " << c.getHp() << " hit points left" << std::endl;
    std::cout << std::endl;

    a.guardGate();
    b.guardGate();
    c.guardGate();
    std::cout << std::endl;

    return (0);
}