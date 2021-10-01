#include <string>
#include <fstream>
#include "ERRORCONST.h"
#include <iostream>
void printinfo(std::string file_name)
{
	std::ifstream file(file_name);
	if (!file.is_open())
	{
		std::cout << ERRORCONST;
	}
	else
	{
		int line;
		while (!file.eof())
		{
			if (file >> line) { std::cout << abs(line) << std::endl; }
			else { file.clear(); file.ignore(1, ' '); }
		}
		
	}
}