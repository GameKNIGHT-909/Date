#include "Date.h"

Date::Date(int m, int d, int y)
{
    this.d = d;
    this.m = m;
    this.y = y;
}
void Date::display()
{
    cout << m << "/" << d << "/" << y << endl;
}
