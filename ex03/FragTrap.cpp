/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:44:30 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/03 11:34:31 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap " << this->_name << " is also a FragTrap !" << std::endl;
	this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
	return;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " is destroyed !" << std::endl;
	return;
}

FragTrap&	FragTrap::operator=( const FragTrap& rhs ){
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_attackDamage = rhs.getAttackDamage();
		this->_energyPoints = rhs.getEnergyPoints();
	}
	std::cout << "ScavTrap " << this->_name << " is also a FragTrap !" << std::endl;
	return (*this);
}

void FragTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
		return;
	}
	std::cout << "FragTrap " << this->_name << " can no longer attack, " << target << " is safe !" << std::endl;
	return;
}

void    FragTrap::highFiveGuys( void ) {
    if ( this->_energyPoints <= 0 ) {
        std::cout << "FragTrap " << this->_name << " no longer has enough energy to give a high five" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " high fives my friends !" << std::endl;
    this->_energyPoints -= 1;
}
