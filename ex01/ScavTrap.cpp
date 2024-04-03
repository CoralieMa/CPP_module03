/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:22:19 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/03 11:35:17 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScapTrap " << this->_name << " is also a ScavTrap !" << std::endl;
	this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
	this->_guardingGate = false;
	return;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->_name << " is destroyed !" << std::endl;
	return;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs ){
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_attackDamage = rhs.getAttackDamage();
		this->_energyPoints = rhs.getEnergyPoints();
	}
	std::cout << "ScapTrap " << this->_name << " is also a ScavTrap !" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " can no longer attack, " << target << " is safe !" << std::endl;
	return;
}

void ScavTrap::guardGate(void){
	if ( this->_energyPoints <= 0 ) {
        std::cout << "ScavTrap " << this->_name << " no longer has enough energy to guard the gate" << std::endl;
        return;
    }
	_guardingGate = true;
	std::cout << "ScavTrap " << this->_name << " is is now in Gate keeper mode" << std::endl;
    this->_energyPoints -= 1;
	return;
}