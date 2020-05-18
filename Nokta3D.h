/*Melik KARACA 190757079 Bil.M�h.(�.�) C grubu 
Nesneye Y�nelik Programlama BIM-104-50-50-C Bahar 2020
PROJES� 3 Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER*/

#ifndef NOKTA3D_H //ifndef, define ve endif  �ni�lemci direktifleri Polinom S�n�f� tan�m�n�n projenin 
#define NOKTA3D_H //birden fazla dosyas� i�erisinde kullan�m�n�n nesne kodu (object code) b�nyesinde tekrar�n� engeller.
#include "Nokta2D.h"
class Nokta3D :    //t�retilmi� Nokta3D s�n�f�m�n ad�
	public Nokta2D //temel s�n�f
{
public: //public de�i�kenler
	Nokta3D(); //yap�c� constructor
	
	virtual void SetX(double input); //set fonksiyonlar�
	virtual void SetY(double input);
	void SetZ(double input);

	virtual double GetX();  //get fonksiyonlar�
	virtual double GetY();
	double GetZ();

	void print() const; 

private: //private de�i�kenler
	double x, y, z;

};
#endif
