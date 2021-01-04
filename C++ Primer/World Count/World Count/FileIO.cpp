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

std::istream& CountWord(std::istream& ifs, std::map<char, int>& count)
{
	char temp;
	while (ifs >> temp)
	{
		count[temp]++;
	}
	for (auto it = count.begin(); it != count.end(); it++)
	{
		std::cout << "word = " << it->first << " usuage= " << it->second << std::endl;
	}
	return ifs;
}

std::istream& CountString(std::istream& ifs, std::map<std::string, int>& count)
{
	std::string temp{}; //문자열을 임시로 저장할 놈을 만듬 
	while (!ifs.eof()) //eof에 도달하기 전까지 파일을 읽는다 
	{
		std::getline(ifs, temp); //개행문자 포함하지 않고  한줄씩 읽음 
		count[temp]++;
	}
	for (auto it = count.begin(); it != count.end(); it++)
	{
		std::cout << "string = " << it->first << " usuage= " << it->second << std::endl;
	}
	return ifs;
}


