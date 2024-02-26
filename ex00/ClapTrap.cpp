#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << _name << " is created !" << std::endl;
	return;
}
 
ClapTrap::ClapTrap( const ClapTrap& rhs){
	*this = rhs;
	std::cout << "ClapTrap " << _name << " is created !" << std::endl;
	return;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << " is destroyed !" << std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs ){
	return (*this);
}

std::string ClapTrap::getName(){ 
	return (_name); 
}

int ClapTrap::getHitPoints(){ 
	return (_hitPoints); 
}

int ClapTrap::getEnergyPoints(){ 
	return (_energyPoints); 
}

int ClapTrap::getAttackDamage(){ 
	return (_attackDamage); 
}

void ClapTrap::attack(const std::string& target){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target.getName() << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
		target.takeDamage(_attackDamage);
		return;
	}
	std::cout << "ClapTrap " << _name << " can no longer attack, " << target.getName() << " is safe !" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount){
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " has " << _hitPoints << " left." >> std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount){
	_energyPoints += amount;
	std::cout << << "ClapTrap " << _name << " gains " << amount << ", he now has " << _energyPoints " energy points !" >> std::endl;
	return ;
}
