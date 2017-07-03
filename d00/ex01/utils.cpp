#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

#include "MyClasses.h"

void	Util::FormatPrint(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
}

void	Util::Marge(std::string str1, std::string str2)
{
	if (str1.compare("Homer") == 0 && str2.compare("Simpson") == 0)
	{
		sleep(4);
		std::cout << "MaaAAaarrrgGeee";
		sleep(2);
		std::cout << "youre ";
		sleep(1);
		std::cout << "breeaaakkkingg ";
		sleep(1);
		std::cout << "mmmyyyyyy";
		sleep(1);
		std::cout << "heeearrrttt";
		sleep(1);
	}
}		
