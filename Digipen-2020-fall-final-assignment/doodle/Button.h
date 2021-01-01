#pragma once
#include"doodle/doodle.hpp"
#include<string>
#include<vector>
#include<iostream>
using namespace doodle;

class Button
{
private:
    double posx;
    double posy;
    double      width=100;
    double      height=40;

    bool        mouseIsOver = false;
    bool        mousewasPressed = false;
    std::string Click_Message{"Click!"};
    Color   Button_color1{220};
    Color   Button_color2{170};
    Color       Text_color{0};
    

public:
    Button() = default;
    Button(double x, double y) : posx{x}, posy{y} {};
    void update();
    void draw();

};
