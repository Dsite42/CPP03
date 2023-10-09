/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:46:02 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/09 15:20:21 by cgodecke         ###   ########.fr       */
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
void FragTrap::attack(const std::string &target)
{
	if (this->get_hit_points() < 0)
		std::cout << "FragTrap: " << this->get_name() << " is already dead and can not attack someone." << std::endl;
	else if (this->get_energy_points() > 0)
	{
		std::cout << "FragTrap: " << this->get_name() << " attacks " << target << ", causing <damage> points of damage!" << std::endl;
		this->set_energy_points(get_energy_points() - 1);
	}
	else
		std::cout << "FragTrap: Not enough energy points for attack" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->get_hit_points() < 0 && amount != 0)
		std::cout << "FragTrap: " << this->get_name() << " is already dead and can not be more demaged." << std::endl;
	else
	{
		std::cout << "FragTrap: " << this->get_name() << " took " << amount << " points of damage!" << std::endl;
		
		this->set_hit_points(this->get_hit_points() - amount);
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->get_hit_points() < 0)
		std::cout << "FragTrap: " << this->get_name() << " is already dead and can not be rapaired." << std::endl;
	else if (this->get_energy_points() > 0)
	{
		std::cout << "FragTrap: " << this->get_name() << " got " << amount << " points of hit points!" << std::endl;
		this->set_hit_points(get_hit_points() + amount);
		this->set_energy_points(get_energy_points() - 1);
	}
	else
		std::cout << "FragTrap: "<< "Not enough energy points for being repaired" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->get_hit_points() > 0)
		std::cout << "FragTrap wants to see a high five!" << std::endl;
	else
		std::cout << "FragTrap wants to see a high five, but he is already dead :(" << std::endl;
}
