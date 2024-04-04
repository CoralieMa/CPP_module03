/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:40 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/04 10:53:23 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap warrior("Ares");
    DiamondTrap hero(warrior);

    warrior.whoAmI();
	hero.whoAmI();

    warrior.attack( "Hector" );
    warrior.takeDamage( 10 );
    warrior.beRepaired( 10 );

    return (0);
}
