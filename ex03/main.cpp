/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:40 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/08 11:42:34 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap warrior("Ares");
	std::cout << std::endl;	
    DiamondTrap hero(warrior);

	std::cout << std::endl;

    warrior.whoAmI();
	std::cout << std::endl;	
	hero.whoAmI();

	std::cout << std::endl;	

	warrior.robotStatus();
	hero.robotStatus();

	// std::cout << std::endl;

	// warrior.highFiveGuys();
    // warrior.attack("Hector");
    // warrior.takeDamage( 20 );
    // warrior.beRepaired( 10 );
	
	// std::cout << std::endl;	
	// warrior.robotStatus();

    return (0);
}
