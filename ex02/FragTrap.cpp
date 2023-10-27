/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:46:02 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/27 15:56:05 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// constructors
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap: Default constructor called\n";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: Name constructor called\n";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap: Copy constructor called\n";
}

FragTrap &FragTrap::operator = (const FragTrap &other)
{
	
	std::cout << "FragTrap: Copy assignment constructor called\n";
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Deconstructor called\n";
}

// member functions
void FragTrap::attack(const std::string &target)
{
	if (this->get_hit_points() == 0)
		std::cout << "FragTrap: " << this->get_name() << " is already dead and can not attack someone." << std::endl;
	else if (this->get_energy_points() > 0)
	{
		std::cout << "FragTrap: " << this->get_name() << " attacks " << target << ", causing <damage> points of damage!" << std::endl;
		this->set_energy_points(get_energy_points() - 1);
	}
	else
		std::cout << "FragTrap: Not enough energy points for attack" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hit_points > 0)
		std::cout << "FragTrap wants to see a high five!" << std::endl;
	else
		std::cout << "FragTrap wants to see a high five, but he is already dead :(" << std::endl;
}
