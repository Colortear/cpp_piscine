/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:12:48 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 18:41:33 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	*bot1 = new FragTrap("Francis");
	FragTrap	*bot2 = new FragTrap("Boty_Boy");
	FragTrap	*bot3 = new FragTrap("Ev1l rbt");

	bot2->takeDamage(bot1->meleeAttack(bot2->name));
	bot1->takeDamage(bot2->rangedAttack(bot1->name));
	bot3->takeDamage(bot2->vaulthunter_dot_exe(bot3->name));

	delete bot1;
	delete bot2;
	delete bot3;
	return (0);
}
