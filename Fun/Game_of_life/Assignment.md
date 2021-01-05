# CS120 Draw Food Assignment

Your task is to use the 2D Shape functions to draw a picture of one of your favorite foods. 

This will introduce the shape drawing functions and is a way to practice making `constexpr` variables.

Use each of the following functions so that they contribute to the picture in a meaningfully way. _(ie don't draw something off-screen or make it so small one can barely notice it)_

- `draw_ellipse()`
- `draw_line()`
- `draw_quad()`
- `draw_rectangle()`
- `draw_triangle()`

Instead of using literal numbers for everything, insteaf you should use `constexpr` variables to increase the readability of your code.

For example:

Instead of 
```c++
    draw_rectangle(10, 50, 64, 128);
```

Do something like this instead:
```c++
    constexpr int box_x {10};
    constexpr int box_y {50};
    constexpr int box_width {64};
    
    draw_rectangle(box_x, box_y, box_width, 2 * box_width);
```

Professional programmers like the second way because now we know what those number values are being used for. No guessing needed.

Suggestion: Use the `set_ellipse_mode()` and `set_rectangle_mode()` functions to simplify the numbers needed for drawing ellipses and rectangles.

Note: You don't have to use all of the drawing functions to represent the food. You may add decorations in order to fulfill this requirement.

## Basic Game Loop

This program will need to make a loop to keep the applicatin running. Since we are interested in game development then we will be doing the [stanard game loop](http://gameprogrammingpatterns.com/game-loop.html).

The idea is that we need to loop until the user closes the window. Naturally, a `while` loop suits this situation perfectly.

**While** the window is not closed we need to update the window, so that it is interactive and we can click on the buttons. This is alo when the window will look for input events from the keyboard and mouse.

After that we can update our logic and draw. Using `doodle`, the start of all doodle programs should look something like this:

```c++
#include <doodle/doodle.hpp> // bring in the doodle code
int main(void) {
    doodle::create_window(); // make a default window
    while(!doodle::is_window_closed()) {
        // update the Window UI, like minimize, resize, close, etc... and look for keyboard and mouse input
        doodle::update_window(); 
        // TODO Update your logic
        // TODO Draw your game
    }
    return 0;
}
```

Having to type `doodle::` for every `doodle` function may become tedious, so we can tell the compiler that we're going to skip that part by declaring:
```c++
using namespace doodle;
```

Though this assignment does not have to be dynamic _(food doesn't need to move around)_, most of the time our graphics will move. In order for that to look correctly we should always clear the window with a background color. This way when an object moves from one update to the next we don't get a weird smear.

Here is a more typical example of a game loop with doodle:

```c++
#include <cmath>             // bring in math code from the standard
#include <doodle/doodle.hpp> // bring in the doodle code
using namespace doodle;      // for skipping doodle::
int main(void)
{
    create_window();
    while (!is_window_closed())
    {
        update_window();
        // start drawing by clearing the window to a grey color
        clear_background(200);
        // draw something that moves
        const double x = 0;
        const double y = std::sin(ElapsedTime) * 60;
        draw_text("Watch Me Now", x, y);
    }
    return 0;
}
```


# Submission

You will generate one cpp file named **`favorite_food.cpp`** 

Your submission of this file will be in this git repository and on the course site. The course site submission will be used to check for plagiarism.

# Grading Rubric

- [ ] [**core**] Drew a picture of one of student's favorite foods
- [ ] [**core**] Made use of `constexpr` variables to name values and avoid magic numbers
- [ ] Used `draw_ellipse()` meaningfully at least one time
- [ ] Used `draw_line()` meaningfully at least one time
- [ ] Used `draw_quad()` meaningfully at least one time
- [ ] Used `draw_rectangle()` meaningfully at least one time
- [ ] Used `draw_triangle()` meaningfully at least one time
- [ ] Window title contains student name
- [ ] All source files compile without warnings and without errors.
- [ ] Correct files submitted. No unnecessary files submitted.
- [ ] Submitted source files on the course site and on this repository are exactly the same.
- [ ] **All** Source Code has a proper header comment: Name, Assignment Name, Course Number, Term & Year.
- [ ] Followed the appropriate Code Quality Guidelines and Code Style Guidelines.
- [ ] All requirements that are completed are checked off here by replacing the `[ ]` with `[x]`

Scores for Exercises will be given as the following:

Score        | Assessment
------------ | ----------
Zero         | Nothing turned in at all
Failing      | Close to meeting core requirements
Rudimentary  | Meets all of the core requirements
Satisfactory | Close to meeting all requirements
Good         | Clearly meets all requirements 
Excellent    | High quality, well beyond the requirements
