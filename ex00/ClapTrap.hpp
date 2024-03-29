/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:44 by cmartino          #+#    #+#             */
/*   Updated: 2024/03/12 15:52:00 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>
 
class ClapTrap {
	protected: 
		std::string _name;
		int 		_hitPoints;
		int 		_energyPoints;
		int 		_attackDamage;
	
	public: 
		ClapTrap(std::string name); 
		~ClapTrap();

		ClapTrap(const ClapTrap &);
		ClapTrap& operator=( const ClapTrap &rhs);
	
		int			getHitPoints(); 
		int			getEnergyPoints(); 
		int			getAttackDamage();
		std::string	getName(); 

		void	setAttackDamage(int damage);

		void	robotStatus(void);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	attack(const std::string& target);
};
 
#endif
