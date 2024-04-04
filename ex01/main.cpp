/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:40 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/04 10:44:13 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap warrior("Ares"), champion("Hector");
	ScavTrap hero("Achilles");
	ScavTrap hero2(hero);


	warrior.setAttackDamage(3);
	champion.setAttackDamage(2);

	warrior.attack("Hector");
	champion.takeDamage(warrior.getAttackDamage());

	warrior.robotStatus();
	champion.robotStatus();

	warrior.beRepaired(1);
	champion.attack("Achilles");
	hero.takeDamage(champion.getAttackDamage());

	hero.attack("Ares");
	warrior.takeDamage(hero.getAttackDamage());

	warrior.robotStatus();
	champion.robotStatus();
	hero.robotStatus();

	hero.guardGate();
	
	return (0);
}
