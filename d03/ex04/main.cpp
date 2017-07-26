/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:12:48 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/07 00:37:41 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

#include <sys/time.h>

namespace	bigBoss {

	std::string	name = "Big Boss";
	std::string attacks[3] = {
		"CQC Stun",
		"SOCOM",
		"Box Surprise"
	};
	std::string attack_descrip[3] = {
		" attacks with a Close Quarters Combat technique and disappears into the bushes",
		" takes an expert shot with the SOCOM creating a flesh-wound",
		" pops out of a box in front of you and frightens you, then disappears into the brush"
	};
	int			attack_dmg[3] = {5, 12, 17};
	int			HP = 300;
}
int		main(void)
{
	ClapTrap	*clap = new ClapTrap();
	FragTrap	*bot1 = new FragTrap("Francis");
	FragTrap	*bot2 = new FragTrap("Boty_Boy");
	FragTrap	*bot3 = new FragTrap("Ev1l rbt");

	ScavTrap	*trap_boy = new ScavTrap("ZeroCool");
	NinjaTrap	*da_ninja = new NinjaTrap("Wesley_Sn|pes");

	int			who;
	int			what;
	timeval		tv;

	who = 0;
	what = 0;
	bot2->takeDamage(bot1->meleeAttack(bot2->name));
	bot1->takeDamage(bot2->rangedAttack(bot1->name));
	bot3->takeDamage(bot2->vaulthunter_dot_exe(bot3->name));
	
	trap_boy->challengeNewcomer();
	trap_boy->challengeNewcomer();

	std::cout << da_ninja->name << " is attacked while crossing a meadow" << std::endl;
	std::cout << "of course it is da Big Boss" << std::endl;

	while (bigBoss::HP > 0 && da_ninja->HP > 0)
	{
		gettimeofday(&tv, 0);
		who = tv.tv_usec % 6;
		gettimeofday(&tv, 0);
		what = tv.tv_usec % 3;
		if (who == 0)
			da_ninja->ninjaShoebox(*bot2);
		else if (who == 1)
			da_ninja->ninjaShoebox(*bot3);
		else if (who == 2)
			da_ninja->ninjaShoebox(*trap_boy);
		else if (who == 3)
			da_ninja->ninjaShoebox(*da_ninja);
		else if (who == 4)
			bigBoss::HP -= da_ninja->meleeAttack(bigBoss::name);
		else if (who == 5)
			bigBoss::HP -= da_ninja->rangedAttack(bigBoss::name);
		if (bigBoss::HP > 0)
		{
			std::cout << bigBoss::name << " uses " << bigBoss::attacks[what] << std::endl;
			std::cout << bigBoss::name << bigBoss::attack_descrip[what] << std::endl;
			da_ninja->takeDamage(bigBoss::attack_dmg[what]);
		}
	}
	if (bigBoss::HP >= 0)
		std::cout << "The Big Boss has been defeated" << std::endl;
	else
		std::cout << da_ninja->name << " was defeated in battle" << std::endl;
	delete trap_boy;
	delete da_ninja;
	delete bot1;
	delete bot2;
	delete bot3;

	delete clap;

	return (0);
}
