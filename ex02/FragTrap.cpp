/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:46:02 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/27 13:46:29 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// constructors
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap: Default constructor called\n";
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_attack_damage(30);
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Name constructor called\n";
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_attack_damage(20);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap: Copy constructor called\n";
}

FragTrap &FragTrap::operator = (const FragTrap &other)
{
	
	std::cout << "FragTrap: Copy assignment constructor called\n";
	this->set_name(other.get_name());
	this->set_hit_points(other.get_hit_points());
	this->set_energy_points(other.get_energy_points());
	this->set_attack_damage(other.get_attack_damage());
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Deconstructor called\n";
}

// member functions

void FragTrap::highFivesGuys(void)
{
	if (this->get_hit_points() > 0)
		std::cout << "FragTrap wants to see a high five!" << std::endl;
	else
		std::cout << "FragTrap wants to see a high five, but he is already dead :(" << std::endl;
}
