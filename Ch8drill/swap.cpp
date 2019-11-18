#include "std_lib_facilities.h"

using namespace std;

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
}*/

int main()
{
    int x = 7;
    int y = 9;
    swap_r(x, y);
    swap_v(7, 9);
    const int cx = 7;
    const int cy = 9;
    //swap_cr(cx, cy);
    swap_v(7.7, 9.9);
    double dx = 7.7;
    double dy = 9.9;
    //swap_r(dx, dy);
    //swap_v(7.7, 9.9);

    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    cout << "cx: " << cx << '\n';
    cout << "cy: " << cy << '\n';
    cout << "dx: " << dx << '\n';
    cout << "dy: " << dy << '\n';
	
	return 0;
}