#include <doodle/doodle.hpp>
#include"assets.h"
#include"Button.h"
using namespace doodle;
int main(void)
try
{
    create_window("Create Button Spawner",1000,1000);
    set_frame_of_reference(FrameOfReference::LeftHanded_OriginTopLeft);
    set_rectangle_mode(RectMode::Center);
    std::map<Monster_Color,Image> Images;
    save_image(Images);

    Button button1{500,900};

    while (!is_window_closed())
    {
        update_window();
        clear_background(255);
        button1.update();
        button1.draw();
        //auto it = Images.find(Monster_Color::yellow);
        //draw_image(it->second, 40, 40);
    }
    return 0;
}

catch (const std::exception&)
{

}


   











