/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:44:26 by cmartino          #+#    #+#             */
/*   Updated: 2024/04/05 12:11:12 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
 
class FragTrap : virtual public ClapTrap{
	private: 
		bool	_guardingGate;
	
	public: 
		FragTrap(std::string name);
		FragTrap( const FragTrap &rhs); 
		~FragTrap(); 
		FragTrap& operator=( const FragTrap &rhs);

		void	attack(const std::string& target);
		void	highFiveGuys(void) ;
};
 
#endif
