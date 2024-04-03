/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:18:46 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/03 16:47:33 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
 
class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string	_name;
	
	public: 
		DiamondTrap(std::string name); 
		DiamondTrap( const DiamondTrap &rhs); 
		~DiamondTrap();
		DiamondTrap& operator=( const DiamondTrap &rhs);

		void	whoAmI();
		using	ScavTrap::attack;
};
 
#endif