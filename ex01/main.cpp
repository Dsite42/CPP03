/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:42:04 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/09 12:07:59 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "\033[33m" << std::endl << "Showing ClapTrap constructor" << "\033[0m" << std::endl;
	ClapTrap default_clap;
	ClapTrap tim("Tim");


	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap constructor" << "\033[0m" << std::endl;
	ScavTrap default_tom;
	ScavTrap tom("Tom");
	
	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap functions" << "\033[0m" << std::endl;
	tom.guardGate();
	tom.attack("a car");
	std::cout << "Tom has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap copy constructor" << "\033[0m" << std::endl;
	ScavTrap copytom(tom);
	std::cout << "copyTom has " << copytom.get_hit_points() << " hit points and " << copytom.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Tests for ScavTrap copy assignment constructor" << "\033[0m" << std::endl;
	tom.attack("a car");
	std::cout << "Tom has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	ScavTrap thirdtom("ThirdTom");
	std::cout << "ThirdTom has " << thirdtom.get_hit_points() << " hit points and " << thirdtom.get_energy_points() << " energy points left" << std::endl;
	thirdtom = tom;
	std::cout << "ThirdTom has " << thirdtom.get_hit_points() << " hit points and " << thirdtom.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Tests for more ScavTrap functions" << "\033[0m" << std::endl;
	tom.takeDamage(2);
	std::cout << "Tom has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;

	tom.beRepaired(2);
	std::cout << "Tom has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Deconstructor calling" << "\033[0m" << std::endl;

	return (0);
}
