#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>
 
class ClapTrap
{
private: 
	std::string _name;
	int 		_hitPoints = 10;
	int 		_energyPoints = 10;
	int 		_attackDamage = 10;
 
public: 
	ClapTrap(std::string name); 
	ClapTrap( const ClapTrap &rhs); 
	ClapTrap(std::string newName, int newHitPoints, int newEnergyPoints, int newAttackDamage);
	~ClapTrap(); 
	ClapTrap& operator=( const ClapTrap &rhs);
 
	std::string getName(); 
	int getHitPoints(); 
	int getEnergyPoints(); 
	int getAttackDamage();


	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
 
#endif
