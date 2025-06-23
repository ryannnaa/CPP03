#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "[ Default DiamondTrap ]" << std::endl;
    DiamondTrap a;

    std::cout << std::endl << "[ Named DiamondTrap ]" << std::endl;
    DiamondTrap b("Beta");

    std::cout << std::endl << "[ Who Am I ]" << std::endl;
    a.whoAmI();
    b.whoAmI();

    std::cout << std::endl << "[ Hi-Five ]" << std::endl;
    a.highFivesGuys();
    b.highFivesGuys();

    std::cout << std::endl << "[ Attack ]" << std::endl;
    a.attack("Beta");

    std::cout << std::endl << "[ Take Damage ]" << std::endl;
    b.takeDamage(a.getAd());

    std::cout << std::endl << "[ Repair ]" << std::endl;
    b.beRepaired(10);

    std::cout << std::endl << "[ Guard Gate ]" << std::endl;
    b.guardGate();

    std::cout << std::endl;
    return (0);
}