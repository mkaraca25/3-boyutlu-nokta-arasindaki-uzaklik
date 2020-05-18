/*Melik KARACA 190757079 Bil.Müh.(Ý.Ö) C grubu 
Nesneye Yönelik Programlama BIM-104-50-50-C Bahar 2020
PROJESÝ 3 Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER*/

#ifndef NOKTA3D_H //ifndef, define ve endif  öniþlemci direktifleri Polinom Sýnýfý tanýmýnýn projenin 
#define NOKTA3D_H //birden fazla dosyasý içerisinde kullanýmýnýn nesne kodu (object code) bünyesinde tekrarýný engeller.
#include "Nokta2D.h"
class Nokta3D :    //türetilmiþ Nokta3D sýnýfýmýn adý
	public Nokta2D //temel sýnýf
{
public: //public deðiþkenler
	Nokta3D(); //yapýcý constructor
	
	virtual void SetX(double input); //set fonksiyonlarý
	virtual void SetY(double input);
	void SetZ(double input);

	virtual double GetX();  //get fonksiyonlarý
	virtual double GetY();
	double GetZ();

	void print() const; 

private: //private deðiþkenler
	double x, y, z;

};
#endif
