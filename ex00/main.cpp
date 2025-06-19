#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Beta");
    ClapTrap c(a);
    ClapTrap d;
    d = b;

    a.attack("Beta");
    b.takeDamage(0);
    b.beRepaired(0);

    return (0);
}