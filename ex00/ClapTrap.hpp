/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:44 by cmartino          #+#    #+#             */
/*   Updated: 2024/02/26 13:18:38 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>
 
class ClapTrap {
	private: 
		std::string _name;
		int 		_hitPoints;
		int 		_energyPoints;
		int 		_attackDamage;
	
	public: 
		ClapTrap(std::string name); 
		ClapTrap( const ClapTrap &rhs); 
		ClapTrap(std::string newName, int newHitPoints, int newEnergyPoints, int newAttackDamage);
		~ClapTrap(); 
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
