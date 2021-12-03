#include "FragTrap.hpp"
#include <unistd.h>

const int FragTrap::_Max_hit_points = 100;
const int FragTrap::_Max_energy_points = 100;
const int FragTrap::_Melee_attack_damage = 30;
const int FragTrap::_Ranged_attack_damage = 20;
const int FragTrap::_Armor_damage_reduction = 5;

FragTrap::FragTrap(){
    std::cout << "La personalidad comienza con el constructor por defecto" << std::endl;
    _Hit_points = 100;
    _Energy_points = 100;
    _Level = 1;
    _Name = "Default";
}

FragTrap::FragTrap(std::string name){
    std::cout << "La personalidad comienza aquí en el constructor" << std::endl;
    _Hit_points = 100;
    _Energy_points = 100;
    _Level = 1;
    _Name = name;
}

FragTrap::~FragTrap(){
    std::cout << "No pierdas el tiempo, FragTrap " << _Name << " ha sido destruido" << std::endl;
}

FragTrap::FragTrap(FragTrap const &frag){
    std::cout << "Copy constructor called" << std::endl;
    *this = frag;
}

FragTrap &FragTrap::operator=(FragTrap const &frag){
    if (this != &frag)
    {
        this->_Name = frag.getName();
        this->_Hit_points = frag.getHitPoints();
        this->_Energy_points = frag.getEnergyPoints();
        this->_Level = frag.getLevel();
    }
    return *this;
}

void FragTrap::rangedAttack(std::string const &target){
    if (getEnergyPoints() > 0)
    {
        std::cout << _Name <<  " ataca a " << target << " de lejos, ¡causándole " << _Ranged_attack_damage << " puntos de daño!" << std::endl;
        setEnergyPointsRemove();
    }
}

void FragTrap::meleeAttack(std::string const &target){
    std::cout << _Name <<  " ataca a " << target << " cuerpo a cuerpo ¡causándole " << _Melee_attack_damage << " puntos de daño!" << std::endl;
    setEnergyPointsRemove();
}

void FragTrap::takeDamage(unsigned int amount){
    if (getHitPoints() > 0)
        _Hit_points -= amount;
}

void FragTrap::beRepaired(unsigned int amount){
    std::cout << _Name << " recupera " << amount << " puntos de energia!" << std::endl;
    std::cout << getName() << " tenia " << getEnergyPoints() << " de energia" << std::endl;
    if (getEnergyPoints() < _Max_energy_points)
        setEnergyPointsAdd(amount);
    std::cout << "Ahora tiene " << getEnergyPoints() << " de energia" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target){
    int op;
    op = 0;
    srand(time(NULL));
    op = 1 + rand() % 6;
    switch (op)
    {
    case 1:
        {
            if (getEnergyPoints() > 25)
            {
                std::cout << getName() << " ataca a " << target << " con ráfaga de fuego ¡causándole " << _Melee_attack_damage << " puntos de daño!" << std::endl;
                std::cout << getName() << " tenia " << getEnergyPoints() << " de energia" << std::endl;
                    _Energy_points -= 25;
                std::cout << "Ahora tiene " << getEnergyPoints() << " de energia" << std::endl;
            }
            else
            {
                std::cout << "Ahora tiene " << getEnergyPoints() << " de energia" << std::endl;
            }
            break;
        }
    case 2:
        {
            if (getEnergyPoints() > 25)
            {
                std::cout << getName() << " ataca a " << target << " granada de mano ¡causándole " << _Melee_attack_damage << " puntos de daño!" << std::endl;
                std::cout << getName() << " tenia " << getEnergyPoints() << " de energia" << std::endl;
                    _Energy_points -= 25;
                std::cout << "Ahora tiene " << getEnergyPoints() << " de energia" << std::endl;
            }
            else
            {
                std::cout << getName() << " no tiene energia suficiente para realizar el ataque" << std::cout;
            }            
            break;
        }
    case 3:
         {
            if (getEnergyPoints() > 25)
            {
                std::cout << getName() << " ataca a " << target << " con lanza térmica ¡causándole " << _Melee_attack_damage << " puntos de daño!" << std::endl;
                std::cout << getName() << " tenia " << getEnergyPoints() << " de energia" << std::endl;
                    _Energy_points -= 25;
                std::cout << "Ahora tiene " << getEnergyPoints() << " de energia" << std::endl;
            }
            else
            {
                std::cout << getName() << " no tiene energia suficiente para realizar el ataque" << std::cout;
            }            
            break;
        }
    case 4:
         {
            if (getEnergyPoints() > 25)
            {
                std::cout << getName() << " ataca a " << target << " con puños de acero ¡causándole " << _Melee_attack_damage << " puntos de daño!" << std::endl;
                std::cout << getName() << " tenia " << getEnergyPoints() << " de energia" << std::endl;
                    _Energy_points -= 25;
                std::cout << "Ahora tiene " << getEnergyPoints() << " de energia" << std::endl;
            }
            else
            {
                std::cout << getName() << " no tiene energia suficiente para realizar el ataque" << std::cout;
            }            
            break;
        }
    case 5:
        {
            if (getEnergyPoints() > 25)
            {
                std::cout << getName() << " ataca a " << target << " con dardos paralizantes ¡causándole " << _Melee_attack_damage << " puntos de daño!" << std::endl;
                std::cout << getName() << " tenia " << getEnergyPoints() << " de energia" << std::endl;
                    _Energy_points -= 25;
                std::cout << "Ahora tiene " << getEnergyPoints() << " de energia" << std::endl;
            }
            else
            {
                std::cout << getName() << " no tiene energia suficiente para realizar el ataque" << std::cout;
            }            
            break;
        }
    default:
        {
            std::cout << "Ataque kamikase. Has destruido el planeta con 10 bombas nucleares. Estan todos muertos!!" << std::endl;
        }
    }
}

void FragTrap::setEnergyPointsAdd(unsigned int amount){
    _Energy_points += amount;
}

void FragTrap::setHitPointsAdd(unsigned int amount){
    _Hit_points += amount;
}

void FragTrap::setEnergyPointsRemove(){
    if (getEnergyPoints() > 0)
    {
        std::cout << getName() << " tenia " << getEnergyPoints() << " de energia" << std::endl;
            _Energy_points -= 5;
        std::cout << "Ahora tiene " << getEnergyPoints() << " de energia" << std::endl;
    }
}

void FragTrap::setPoints(int setting_point){
    usleep(1000000);
    if (setting_point > 0 && setting_point < 3)
    {
       if (getHitPoints() > 0 && getHitPoints() - _Ranged_attack_damage > 0 && getHitPoints() - _Melee_attack_damage > 0)
       {
            std::cout << getName() << " tenia " << getHitPoints() << " de Hit" << std::endl;
            if (setting_point == 1)
                takeDamage(_Ranged_attack_damage);
            else if (setting_point == 2)
                takeDamage(_Melee_attack_damage);
            std::cout << "Ahora tiene " << getHitPoints() << " de Hit" << std::endl;
       }
       else
            std::cout << getName() << " esta muerto" << std::endl;
    }
    else if (setting_point == 3)
        beRepaired(_Armor_damage_reduction);
}

std::string FragTrap::getName() const{
    return _Name;
}

int FragTrap::getHitPoints() const{
    return _Hit_points;
}

int FragTrap::getEnergyPoints() const{
    return _Energy_points;
}

int FragTrap::getLevel() const{
    return _Level;
}