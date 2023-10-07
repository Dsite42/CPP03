/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:42:04 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/07 17:31:07 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap tim("Tim");
	ClapTrap copy_tim(tim);

	ClapTrap bernd("Bernd");

	tim.attack("a bear");
	tim.takeDamage(2);
	std::cout << "Tim has " << tim.get_hit_points() << " hit points and " << tim.get_energy_points() << " energy points left" << std::endl;

	bernd.takeDamage(11);
	bernd.attack("house");
	bernd.beRepaired(5);
	bernd.takeDamage(5);
	std::cout << "Bernd has " << bernd.get_hit_points() << " hit points and " << bernd.get_energy_points() << " energy points left" << std::endl;
	
	std::cout << "CopyTim has " << copy_tim.get_hit_points() << " hit points and " << copy_tim.get_energy_points() << " energy points left" << std::endl;

	copy_tim = tim;
	std::cout << "CopyTim has " << copy_tim.get_hit_points() << " hit points and " << copy_tim.get_energy_points() << " energy points left" << std::endl;

	return (0);
}
