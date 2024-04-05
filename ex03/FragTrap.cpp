/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:44:30 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/05 12:20:11 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap " << _name << " is also a FragTrap !" << std::endl;
	_hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
	return;
}

FragTrap::FragTrap( const FragTrap& rhs): ClapTrap(rhs.getName()){
	*this = rhs;
	std::cout << "FragTrap " << _name << " is created with a copy constructor!" << std::endl;
	return;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << _name << " is destroyed !" << std::endl;
	return;
}

FragTrap&	FragTrap::operator=( const FragTrap& rhs ){
	if (this != &rhs)
	{
		_name = rhs.getName();
		_hitPoints = rhs.getHitPoints();
		_attackDamage = rhs.getAttackDamage();
		_energyPoints = rhs.getEnergyPoints();
	}
	std::cout << "ScavTrap " << _name << " is also a FragTrap !" << std::endl;
	return (*this);
}

void FragTrap::attack(const std::string& target){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
		return;
	}
	std::cout << "FragTrap " << _name << " can no longer attack, " << target << " is safe !" << std::endl;
	return;
}

void    FragTrap::highFiveGuys( void ) {
    if ( _energyPoints <= 0 ) {
        std::cout << "FragTrap " << _name << " no longer has enough energy to give a high five" << std::endl;
        return;
    }
    std::cout << "FragTrap " << _name << " high fives my friends !" << std::endl;
    _energyPoints -= 1;
}
