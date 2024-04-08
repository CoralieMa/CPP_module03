/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:18:48 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/08 11:33:48 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name){
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << "ClapTrap " << _name << " is a ** DiamondTrap ** !" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( const DiamondTrap& rhs): ClapTrap(rhs.getName() + "_clap_name"), FragTrap(rhs.getName()), ScavTrap(rhs.getName()){
	*this = rhs;
	std::cout << "DiamondTrap " << _name << " is created with a copy constructor!!" << std::endl;
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

std::string DiamondTrap::getName() const{ 
	return (_name); 
}
