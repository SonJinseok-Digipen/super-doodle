#include"assets.h"
void save_image(std::map<Monster_Color, Image>& p) 
{ 
	p.insert(std::make_pair(Monster_Color::red,Image{"assets/jelly/red.png"}));
    p.insert(std::make_pair(Monster_Color::blue, Image{"assets/jelly/blue.png"}));
    p.insert(std::make_pair(Monster_Color::green, Image{"assets/jelly/green.png"}));
    p.insert(std::make_pair(Monster_Color::grey, Image{"assets/jelly/grey.png"}));
    p.insert(std::make_pair(Monster_Color::purple, Image{"assets/jelly/purple.png"}));
    p.insert(std::make_pair(Monster_Color::yellow, Image{"assets/jelly/yellow.png"}));

}