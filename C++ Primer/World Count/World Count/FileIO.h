#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<map>
void ReadFilname(std::istream& is, std::ifstream& ifs);
void CountWord(std::istream& ifs, std::map<char, int>& count);