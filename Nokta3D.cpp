/*Melik KARACA 190757079 Bil.Müh.(Ý.Ö) C grubu 
Nesneye Yönelik Programlama BIM-104-50-50-C Bahar 2020
PROJESÝ 3 Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER*/

#include "Nokta3D.h" //Nokta3D kütüphanem

#include <iostream>

Nokta3D::Nokta3D()
{
}
void Nokta3D::SetX(double input)
{
	x = input;
}

void Nokta3D::SetY(double input)
{
	y = input;
}

void Nokta3D::SetZ(double input)
{
	z = input;
}

double Nokta3D::GetX() 
{
	return x;
}

double Nokta3D::GetY()
{
	return y;
}

double Nokta3D::GetZ()
{
	return z;
}

void Nokta3D::print() const
{
	std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
}


