#include "my.h"
#include "my.cpp"

int foo;

void swap_v(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
/*
void swap_cr(const int& a, const int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
*/
int main()
{

	int x = 7;
    int y = 9;
    swap_r(x, y);
    cout << x << " " << y << endl;
    swap_v(7, 9);
    cout << x << " " << y << endl;
    const int cx = 7;
    const int cy = 9;
    swap_v(cx, cy);
    cout << x << " " << y << endl;
    swap_v(7.7, 9.9);
    cout << x << " " << y << endl;
    swap_v(7.7, 9.9);
    cout << x << " " << y << endl;
    double dx = 7.7;
    double dy = 9.9;
    swap_v(dx, dy);
    cout << x << " " << y << endl;

	foo = 7;
	print_foo();
	print(99);

	return 0;
}