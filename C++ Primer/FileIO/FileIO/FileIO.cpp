// example of std::getline() 
//Day 2021-01-04
#include<iostream>
#include<fstream>
#include<string>
int main()
{
	
	std::ifstream input{ "test.txt" };
	while (!input.eof())
	{
		std::string empty{};
		std::getline(input, empty);  //std::getline함수의 매게변수 첫번째 라인을 추출할 인풋스트림, 추출한 문자열을 저장할 문자열
		std::cout << empty << std::endl;
	}
	 
}

//! 중요한점 getline은 공백은 잃지만 개행문자는 읽지 않는다. 중요함!!! 
//그래서 파일의 문자를 읽을때 엔터가 들어간부분은 읽지 않고 바로 다음으로 넘김
