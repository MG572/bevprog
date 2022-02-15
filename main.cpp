#include "Simple_window.h"
#include "Graph.h"
int main()
{
using namespace Graph_lib;
Point tl {100,100};

Simple_window win {tl,800,1000,"Simple_window"};
//win.x_max()
int x_size = 800;
int y_size = 801;
int x_grid = 100;
int y_grid = 100;

Lines grid;
for (int x=x_grid; x<x_size; x+=x_grid)
grid.add(Point{x,0},Point{x,y_size});
for (int y = y_grid; y<y_size; y+=y_grid)
grid.add(Point{0,y},Point{x_size,y});
win.attach(grid);

//Horribleness ahead
Rectangle rect00 {Point{0,0},100,100};
rect00.set_fill_color(Color::red);
win.attach(rect00);
Rectangle rect01 {Point{100,100},100,100};
rect01.set_fill_color(Color::red);
win.attach(rect01);
Rectangle rect02 {Point{200,200},100,100};
rect02.set_fill_color(Color::red);
win.attach(rect02);
Rectangle rect03 {Point{300,300},100,100};
rect03.set_fill_color(Color::red);
win.attach(rect03);
Rectangle rect04 {Point{400,400},100,100};
rect04.set_fill_color(Color::red);
win.attach(rect04);
Rectangle rect05 {Point{500,500},100,100};
rect05.set_fill_color(Color::red);
win.attach(rect05);
Rectangle rect06 {Point{600,600},100,100};
rect06.set_fill_color(Color::red);
win.attach(rect06);
Rectangle rect07 {Point{700,700},100,100};
rect07.set_fill_color(Color::red);
win.attach(rect07);

Image coffe{Point{0,0}, "coffe.jpg"};
win.attach(coffe);


win.wait_for_button();
}
