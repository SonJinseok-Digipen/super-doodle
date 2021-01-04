#include"FileIO.h"
void ReadFilname(std::istream& is, std::ifstream& ifs)
{
	while (!ifs.is_open())
	{
		std::string Filename{};
		is >> Filename;
		ifs.open(Filename);
		if (ifs.fail())
		{
			std::cout << "Failed to open" << '\n';
		}
		if (ifs.good())
		{
			std::cout << "Succeed to open" << '\n';
		}
	}
}

void CountWord(std::istream&ifs, std::map<char,int>&count)
{
	char temp;
	while (ifs>>temp)
	{
		count[temp]++;
	}
	for (auto it = count.begin(); it != count.end(); it++)
	{
		std::cout << "word = " << it->first << " usuage= " << it->second << std::endl;
	}
}

