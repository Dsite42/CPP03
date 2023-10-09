/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:42:04 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/09 14:54:30 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "\033[33m" << std::endl << "Showing ScavTrap constructor" << "\033[0m" << std::endl;
	ScavTrap default_clap;
	ScavTrap tim("Tim");
	std::cout << default_clap.get_name() << " has " << default_clap.get_hit_points() << " hit points and " << default_clap.get_energy_points() << " energy points left" << std::endl;
	std::cout << tim.get_name() << " has " << tim.get_hit_points() << " hit points and " << tim.get_energy_points() << " energy points left" << std::endl;

	std::cout << "\033[33m" << std::endl << "Tests for FragTrap constructor" << "\033[0m" << std::endl;
	FragTrap default_tom;
	FragTrap tom("Tom");
	
	std::cout << "\033[33m" << std::endl << "Tests for FragTrap functions" << "\033[0m" << std::endl;
	tom.highFivesGuys();
	tom.attack("a car");
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Tests for FragTrap copy constructor" << "\033[0m" << std::endl;
	FragTrap copytom(tom);
	std::cout << copytom.get_name() << " has " << copytom.get_hit_points() << " hit points and " << copytom.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Tests for FragTrap copy assignment constructor" << "\033[0m" << std::endl;
	tom.attack("a car");
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	FragTrap thirdtom("ThirdTom");
	std::cout << thirdtom.get_name() << " has " << thirdtom.get_hit_points() << " hit points and " << thirdtom.get_energy_points() << " energy points left" << std::endl;
	thirdtom = tom;
	std::cout << thirdtom.get_name() << " has " << thirdtom.get_hit_points() << " hit points and " << thirdtom.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Tests for more FragTrap functions" << "\033[0m" << std::endl;
	tom.takeDamage(2);
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;

	tom.beRepaired(2);
	std::cout << tom.get_name() << " has " << tom.get_hit_points() << " hit points and " << tom.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Deconstructor calling" << "\033[0m" << std::endl;

	return (0);
}
