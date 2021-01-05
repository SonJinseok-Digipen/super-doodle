#pragma once
#include<string>
enum class position
{
	entry,
	sniper,
	lurker,
	IGL,
	second
};

struct Player
{
	std::string name{};
	std::string team_name{};
};