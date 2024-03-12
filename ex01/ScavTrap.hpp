/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:26:06 by cmartino          #+#    #+#             */
/*   Updated: 2024/03/12 11:56:29 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
 
class ScavTrap : public ClapTrap{
	private: 
		bool	_guardingGate;
	
	public: 
		ScavTrap(std::string name); 
		~ScavTrap(); 
		ScavTrap& operator=( const ScavTrap &rhs);

		void	attack(const std::string& target);
		void	guardGate(void);
};
 
#endif