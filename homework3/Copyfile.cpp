#include <string>
#include <fstream>
#include <iostream>
#include "ERRORCONST.h"
#include <windows.h>
void copyFile(std::string file_name, std::string scd_file_name)
{
	setlocale(LC_ALL, "ru");

	std::ifstream file(file_name);
	std::string str;
	if (!file)
	{
		std::cout << ERRORCONST;
	}
	else
	{
		std::string s;
		for (file >> s; !file.eof(); file >> s )
		{
			std::cout << s << std::endl;
		}
		system("copy D:\\file1\\t.txt D:\\file2 /Y");

		
	}
}