#include <iostream>
#include <cstdlib>
#include <ctime>

class FragTrap{
    public:
        FragTrap();
        FragTrap(std::string);
        ~FragTrap();
        FragTrap(FragTrap const &);

        FragTrap &operator=(FragTrap const &);

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const &target);

        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getLevel() const;

        void setEnergyPointsAdd(unsigned int);
        void setHitPointsAdd(unsigned int);
        void setEnergyPointsRemove();
        void setPoints(int);
        
    private:
        int _Hit_points;
        int _Energy_points;
        int _Level;
        static const int _Max_hit_points;
        static const int _Max_energy_points;
        static const int _Melee_attack_damage;
        static const int _Ranged_attack_damage;
        static const int _Armor_damage_reduction;
        std::string _Name;
};