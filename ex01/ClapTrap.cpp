/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:44:13 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/09 11:58:34 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructors
ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Name constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other) :  _name(other._name), _hit_points(other._hit_points),
	_energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
	std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	std::cout << "Copy assignment constructor called\n";
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called\n";
}

// member functions
void ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points < 0)
		std::cout << this->_name << " is already dead and can not attack someone." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing <damage> points of damage!" << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << "Not enough energy points for attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 0 && amount != 0)
		std::cout << this->_name << " is already dead and can not be more demaged." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
		this->_hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points < 0)
		std::cout << this->_name << " is already dead and can not be rapaired." << std::endl;
	else if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " got " << amount << " points of hit points!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points -= 1;
	}
	else
		std::cout << "Not enough energy points for being repaired" << std::endl;
}

// additional member functions
int ClapTrap::get_hit_points() const
{
	return (this->_hit_points);
}

void ClapTrap::set_hit_points(int number)
{
	this->_hit_points = number;
}

int ClapTrap::get_energy_points() const
{
	return (this->_energy_points);
}

void ClapTrap::set_energy_points(int number)
{
	this->_energy_points = number;
}

std::string ClapTrap::get_name() const
{
	return (this->_name);
}

void ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

int ClapTrap::get_attack_damage() const
{
	return (this->_attack_damage);
}

void ClapTrap::set_attack_damage(int number)
{
	this->_attack_damage = number;
}
