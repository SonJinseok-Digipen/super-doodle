//Book : C++ Primer Example code
//Day  : 2020-01-01
//Exercise 8-1
/*
Write a function that takes and returns an istream&. The function should
read the stream until it hits end - of - file.The function should print what it reads to the
standard output.Reset the stream so that it is valid before returning the stream.
*/

#include<iostream>
#include<string>
using namespace std;
istream& read(istream&);

int main()
{
    read(cin);
   
}
istream& read(istream&is)
{
	std::string empty{};
	char temp;
	while (is>>temp)
	{
		empty = empty + temp;
	}
	std::cout << empty << std::endl;
	return is;
}


