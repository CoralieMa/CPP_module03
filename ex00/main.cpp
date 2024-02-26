/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:40 by cmartino          #+#    #+#             */
/*   Updated: 2024/02/26 13:16:58 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap warrior("Ares"), champion("Hector"), hero("Achilles");

	warrior.setAttackDamage(3);
	champion.setAttackDamage(2);

	warrior.attack("Hector");
	champion.takeDamage(warrior.getAttackDamage());

	warrior.robotStatus();
	champion.robotStatus();

	warrior.beRepaired(1);
	champion.attack("Achilles");
	hero.takeDamage(champion.getAttackDamage());

	warrior.robotStatus();
	champion.robotStatus();
	hero.robotStatus();
	
	return (0);
}
