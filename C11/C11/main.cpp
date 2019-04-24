#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <iomanip>

using namespace ::std;
std::string getFileContents(std::ifstream&);

int main() {
	
	std::ifstream Reader("text.txt");
	std::string Art = getFileContents(Reader);

	std::cout << Art << std::endl;

	Reader.close();


	SleepEx(1500, TRUE);


	cin.get();
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
