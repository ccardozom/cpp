#include "FragTrap.hpp"
#include <iostream>

int main()
{
    FragTrap robot1("J5");
    FragTrap robot2("Wall_E");

    std::cout << "========= ATTACK =========" << std::endl;
	robot1.rangedAttack(robot2.getName());
    robot2.setPoints(1);
    std::cout << "\n========= ATTACK =========" << std::endl;
    robot2.meleeAttack(robot1.getName());
    robot1.setPoints(2);
    std::cout << "\n========= ATTACK =========" << std::endl;
	robot1.rangedAttack(robot2.getName());
    robot2.setPoints(1);
    robot1.setPoints(3);
    std::cout << "\n========= ATTACK =========" << std::endl;
    robot1.vaulthunter_dot_exe(robot2.getName());
    robot2.setPoints(2);
    robot2.setPoints(3);
    std::cout << "\n========= ATTACK =========" << std::endl;
    robot1.vaulthunter_dot_exe(robot2.getName());
    robot2.setPoints(1);
    std::cout << "\n========= ATTACK =========" << std::endl;
    robot2.vaulthunter_dot_exe(robot1.getName());
    robot1.setPoints(2);
    std::cout << "\n========= ATTACK =========" << std::endl;
	robot1.rangedAttack(robot2.getName());
    robot2.setPoints(1);
    robot1.setPoints(3);
    return 0;
}