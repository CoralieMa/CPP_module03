/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:26:06 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/05 11:55:11 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
 
class ScavTrap : virtual public ClapTrap{
	private: 
		bool	_guardingGate;
	
	public: 
		ScavTrap(std::string name);
		ScavTrap( const ScavTrap &rhs); 
		~ScavTrap();
		ScavTrap& operator=( const ScavTrap &rhs);

		void	attack(const std::string& target);
		void	guardGate(void);
};
 
#endif