#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"player.h"
#include<map>
#include<vector>
inline std::ifstream ifs;
inline std::ofstream ofs;
std::istream& ReadFilename(std::istream&, std::ifstream&);
std::ifstream& ReadFile(std::ifstream& ifs, std::vector<Player>&vector);
std::ostream& operator<<(std::ostream& os, const Player& p);
inline std::vector<Player>players;
