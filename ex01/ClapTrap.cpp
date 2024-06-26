/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:49 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/05 15:16:41 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << _name << " is created !" << std::endl;
	return;
}
 
ClapTrap::ClapTrap( const ClapTrap & rhs){
	*this = rhs;
	std::cout << "ClapTrap " << _name << " is created with copy constructor!" << std::endl;
	return;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << " is destroyed !" << std::endl;
	return;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs ){
	if (this != &rhs)
	{
		_name = rhs.getName();
		_hitPoints = rhs.getHitPoints();
		_attackDamage = rhs.getAttackDamage();
		_energyPoints = rhs.getEnergyPoints();
	}
	return (*this);
}

std::string ClapTrap::getName() const { 
	return (_name); 
}

int ClapTrap::getHitPoints() const{ 
	return (_hitPoints); 
}

int ClapTrap::getEnergyPoints() const{ 
	return (_energyPoints); 
}

int ClapTrap::getAttackDamage() const{ 
	return (_attackDamage); 
}

void ClapTrap::setAttackDamage(int damage){ 
	_attackDamage = damage;
	if (_attackDamage > 3000){
		_attackDamage = 3000;
		std::cout << "The biggest attack is 3000 hit points" << std::cout;
	}
	if (_attackDamage < 1){
		_attackDamage = 1;
		std::cout << "The lowest attack is 1 hit points" << std::cout;
	}
	return ; 
}

void ClapTrap::attack(const std::string& target){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
		return;
	}
	std::cout << "ClapTrap " << _name << " can no longer attack, " << target << " is safe !" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount){
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit points points left." << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy point" << std::endl;
		return ;
	}
	_hitPoints += amount;
	if (_hitPoints > 10000){
		std::cout << "ClapTrap " << _name << " has reached the maximum number of hit points" << std::endl;
		_hitPoints = 10000;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " gains " << amount << " hit points, he now has " << _hitPoints << " hit points !" << std::endl;
	return ;
}

void ClapTrap::robotStatus(void){
	std::cout << std::endl << "ClapTrap " << _name << " : " << std::endl;
	std::cout << "\t* Energy points : " << _energyPoints << std::endl;
	std::cout << "\t* Hit points : " << _hitPoints << std::endl;
	std::cout << "\t* Attack damages : " << _attackDamage << std::endl << std::endl;
	return ;
}
