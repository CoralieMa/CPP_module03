/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:40 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/04 11:12:03 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    FragTrap warrior("Ares"), champion("Hector");
    FragTrap hero(warrior);

    hero.robotStatus();
	warrior.robotStatus();
	
	warrior.attack("Hector");
    warrior.takeDamage( 10 );
    warrior.beRepaired( 10 );
    warrior.highFiveGuys();
	hero.highFiveGuys();
	champion.highFiveGuys();

	hero.robotStatus();
	warrior.robotStatus();

    return (0);
}
