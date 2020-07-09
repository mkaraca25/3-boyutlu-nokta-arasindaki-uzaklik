

#include "Nokta2D.h" //Nokta2D kütüphanem

#include <iostream>  //cin ve cout 

Nokta2D::Nokta2D() : x(0), y(0) {} //ilk de x y deðerleri
Nokta2D::Nokta2D(double srcx, double srcy) : x(srcx), y(srcy) {}
Nokta2D::Nokta2D(const Nokta2D& srcNokta2D) : x(srcNokta2D.x), y(srcNokta2D.y) {}

void Nokta2D::SetX(double input)
{
	x = input;
}

void Nokta2D::SetY(double input)
{
	y = input;
}

double Nokta2D::GetX()
{
	return x;
}

double Nokta2D::GetY()
{
	return y;
}

void Nokta2D::print() const
{
	std::cout << "(" << x << "," << y << ")" << std::endl;
}
