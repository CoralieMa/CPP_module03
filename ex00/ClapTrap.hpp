/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:12:44 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/03 11:12:34 by cmartino         ###   ########.fr       */
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
	
		int			getHitPoints() const; 
		int			getEnergyPoints() const; 
		int			getAttackDamage() const;
		std::string	getName() const; 

		void	setAttackDamage(int damage);

		void	robotStatus(void);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	attack(const std::string& target);
};
 
#endif
