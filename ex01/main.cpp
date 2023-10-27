/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:42:04 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/27 11:50:52 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	/*
	{
		std::cout << "\033[33m" << std::endl << "Showing ClapTrap constructors" << "\033[0m" << std::endl;

		ClapTrap default_clap;
		ClapTrap tim("Tim");
		ClapTrap copy_tim(tim);
		ClapTrap bernd("Bernd");


		std::cout << "\033[33m" << std::endl << "Tests for ClapTrap functions" << "\033[0m" << std::endl;
		std::cout << "Tim has " << tim.get_hit_points() << " hit points and " << tim.get_energy_points() << " energy points left" << std::endl;
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
		

		std::cout << "\033[33m" << std::endl << "Tests for ClapTrap copy constructor and assignment operator" << "\033[0m" << std::endl;
		std::cout << "CopyTim has " << copy_tim.get_hit_points() << " hit points and " << copy_tim.get_energy_points() << " energy points left" << std::endl;
		copy_tim = tim;
		std::cout << "CopyTim has " << copy_tim.get_hit_points() << " hit points and " << copy_tim.get_energy_points() << " energy points left" << std::endl;


		std::cout << "\033[33m" << std::endl << "Deconstructor calling" << "\033[0m" << std::endl;
	}
	*/


	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap constructor" << "\033[0m" << std::endl;
	ScavTrap default_tom;
	ScavTrap tom("Tom");
	
	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap functions" << "\033[0m" << std::endl;
	tom.guardGate();
	tom.guardGate();
	tom.attack("a car");
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap copy constructor" << "\033[0m" << std::endl;
	ScavTrap copytom(tom);
	std::cout << copytom.get_name() << " has " << copytom.get_hit_points() << " hit points and " << copytom.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap copy assignment constructor" << "\033[0m" << std::endl;
	tom.attack("a car");
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	ScavTrap thirdtom("ThirdTom");
	std::cout << thirdtom.get_name() << " has " << thirdtom.get_hit_points() << " hit points and " << thirdtom.get_energy_points() << " energy points left" << std::endl;
	thirdtom = tom;
	std::cout << thirdtom.get_name() << " has " << thirdtom.get_hit_points() << " hit points and " << thirdtom.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Tests for more ScavTrap functions" << "\033[0m" << std::endl;
	tom.takeDamage(2);
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;

	tom.beRepaired(2);
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Deconstructor calling" << "\033[0m" << std::endl;

	return (0);
}
