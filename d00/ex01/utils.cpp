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
		std::cout << "MaaAAaarrrgGeee";
		std::cout << "youre ";
		std::cout << "breeaaakkkingg ";
		std::cout << "mmmyyyyyy";
		std::cout << "heeearrrttt";
	}
}		
