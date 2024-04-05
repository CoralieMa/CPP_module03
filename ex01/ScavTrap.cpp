/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:22:19 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/05 12:09:26 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap " << _name << " is also a ScavTrap !" << std::endl;
	_hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
	_guardingGate = false;
	return;
}

ScavTrap::ScavTrap( const ScavTrap& rhs): ClapTrap(rhs.getName()){
	*this = rhs;
	std::cout << "ScavTrap " << _name << " is created with a copy constructor!" << std::endl;
	return;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << _name << " is destroyed !" << std::endl;
	return;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs ){
	if (this != &rhs)
	{
		_name = rhs.getName();
		_hitPoints = rhs.getHitPoints();
		_attackDamage = rhs.getAttackDamage();
		_energyPoints = rhs.getEnergyPoints();
	}
	std::cout << "ScapTrap " << _name << " is also a ScavTrap !" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
		return;
	}
	std::cout << "ScavTrap " << _name << " can no longer attack, " << target << " is safe !" << std::endl;
	return;
}

void ScavTrap::guardGate(void){
	if ( _energyPoints <= 0 ) {
        std::cout << "ScavTrap " << _name << " no longer has enough energy to guard the gate" << std::endl;
        return;
    }
	_guardingGate = true;
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
    _energyPoints -= 1;
	return;
}