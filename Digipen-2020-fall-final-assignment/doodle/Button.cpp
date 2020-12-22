#include "Button.h"
void Button ::update() 
{ 
    double Current_mouseX = get_mouse_x();
    double Current_mouseY = get_mouse_y();
    bool withinX = Current_mouseX > posx - width / 2 && Current_mouseX < posx + width / 2;
    bool withinY        = Current_mouseY > posy - height / 2 && Current_mouseY < posy + height / 2;
    mouseIsOver    = withinX && withinY;
    bool IsClicked        = mouseIsOver && mousewasPressed && !MouseIsPressed;
    mousewasPressed        = MouseIsPressed;
    if (IsClicked)
    {
        std::cout << "Hello my yesterday" << std::endl;
    }
}

void Button::draw()
{
 
    if (mouseIsOver == true)
    {
        push_settings();
        set_fill_color(Button_color2);
        draw_rectangle(posx, posy, width, height);
        pop_settings();
        
    }
   

    if (mouseIsOver == false)
    {
        push_settings();
        set_fill_color(Button_color1);
        draw_rectangle(posx, posy, width, height);
        pop_settings();
    }

    push_settings();
    set_font_size(20);
    set_fill_color(Text_color);
    draw_text(Click_Message, posx - width / 2 + 20, posy +height / 2);
    pop_settings();


}