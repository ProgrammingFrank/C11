#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <iomanip>
#include "Game.h"

using namespace::std;

std::string getFileContents(std::ifstream&);

int Game::screen() {

	std::ifstream Reader("text.txt");
	std::string Art = getFileContents(Reader);

	std::cout << Art << std::endl;

	Reader.close();


	
	return 0;


}



std::string getFileContents(std::ifstream& File)
{
	std::string Lines = "";

	if (File)
	{
		while (File.good())
		{
			std::string TempLine;
			std::getline(File, TempLine);
			TempLine += "\n";

			Lines += TempLine;
		}
		return Lines;
	}
	else
	{
		return "File does not exist.";
	}
}
