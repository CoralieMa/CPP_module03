/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:49 by cmartino          #+#    #+#             */
/*   Updated: 2024/02/26 13:14:58 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void ClapTrap::setAttackDamage(int damage){ 
	_attackDamage = damage;
	if (_attackDamage > 3000){
		_attackDamage = 3000;
		std::cout << "The biggest attack is 3000 hit points" << std::cout;
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
