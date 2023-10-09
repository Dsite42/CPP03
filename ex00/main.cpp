/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:42:04 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/09 12:26:28 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "\033[33m" << std::endl << "Showing ClapTrap constructors" << "\033[0m" << std::endl;

	ClapTrap default_clap;
	ClapTrap tim("Tim");
	ClapTrap copy_tim(tim);
	ClapTrap bernd("Bernd");


	std::cout << "\033[33m" << std::endl << "Tests for ClapTrap functions" << "\033[0m" << std::endl;
	tim.attack("a bear");
	tim.takeDamage(2);
	std::cout << "Tim has " << tim.get_hit_points() << " hit points and " << tim.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Tests for being dead" << "\033[0m" << std::endl;
	std::cout << "Bernd has " << bernd.get_hit_points() << " hit points and " << bernd.get_energy_points() << " energy points left" << std::endl;
	bernd.takeDamage(11);
	bernd.attack("house");
	bernd.beRepaired(5);
	bernd.takeDamage(5);
	std::cout << "Bernd has " << bernd.get_hit_points() << " hit points and " << bernd.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Tests for ClapTrap copy assignment constructor" << "\033[0m" << std::endl;
	std::cout << "CopyTim has " << copy_tim.get_hit_points() << " hit points and " << copy_tim.get_energy_points() << " energy points left" << std::endl;
	copy_tim = tim;
	std::cout << "CopyTim has " << copy_tim.get_hit_points() << " hit points and " << copy_tim.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Deconstructor calling" << "\033[0m" << std::endl;

	return (0);
}
