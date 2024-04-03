/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:18:48 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/03 16:52:01 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name + "_frag_name"), ScavTrap(name + "_scav_name"), _name(name){
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << "ClapTrap " << _name << " is a ** DiamondTrap ** !" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( const DiamondTrap& rhs): ClapTrap(rhs.getName()), FragTrap(rhs.getName()), ScavTrap(rhs.getName()){
	*this = rhs;
	std::cout << "DiamondTrap " << this->_name << " is created !" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << _name << " is destroyed !" << std::endl;
	return;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& rhs ){
	if (this != &rhs)
	{
		_hitPoints = FragTrap::_hitPoints;
		_energyPoints = ScavTrap::_energyPoints;
		_attackDamage = FragTrap::_attackDamage;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void) { 
	std::cout << "My Diamond's name is " << _name << " and my ClapTrap's name is " << ClapTrap::_name << std::endl;
	return;
}
