#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<map>
void ReadFilname(std::istream& is, std::ifstream& ifs);
std::istream& CountWord(std::istream& ifs, std::map<char, int>& count);
std::istream& CountString(std::istream& ifs, std::map<std::string, int>& count);