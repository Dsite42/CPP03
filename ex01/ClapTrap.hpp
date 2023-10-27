/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:42:59 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/27 11:27:25 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:
		// constructors
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		// member functions
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		// additional member functions
		unsigned int	get_hit_points() const ;
		void			set_hit_points(unsigned int number);
		unsigned int	get_energy_points() const;
		void			set_energy_points(unsigned int number);
		std::string		get_name() const;
		void			set_name(std::string name);
		unsigned int	get_attack_damage() const;
		void			set_attack_damage(unsigned int number);
};

#endif
