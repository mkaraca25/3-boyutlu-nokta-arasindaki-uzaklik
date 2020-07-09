

#include "Nokta2D.h" //Nokta2D kütüphanem
#include "Nokta3D.h"  //Nokta3D kütüphanem

#include <iostream> //cin cout
#include <cmath> //matematik iþlemleri

double uzunlukHesaplama(Nokta3D& src1, Nokta3D& src2);

int main()
 {
 	
    setlocale(LC_ALL, "Turkish");  //türkçe karakterleri yazma
	double x, y, z;
	Nokta3D nokta1, nokta2;
	while (true)                 //noktalarý alýp aradaki uzalýðý bulma döngüsü
	 {
			std::cout << "1. Noktanýn x, y, ve z koordinatlarýnýn  degerlerýný giriniz:(4 5 2)" << std::endl;
			std::cin >> x >> y >> z;
			nokta1.SetX(x);
			nokta1.SetY(y);
			nokta1.SetZ(z);

			std::cout << "2. Noktanýn x, y, ve z koordinatlarýnýn degerlerini giriniz:(2 3 5)" << std::endl;
			std::cin >> x >> y >> z;
			nokta2.SetX(x);
			nokta2.SetY(y);
			nokta2.SetZ(z);

			std::cout << "2 nokta arasindaki uzaklýk = " << uzunlukHesaplama(nokta1, nokta2) << std::endl;
	}
}

double uzunlukHesaplama(Nokta3D& src1, Nokta3D& src2) //noktalar arasý uzaklýðý hesaplama fonksiyonu
 {

	double xFark = src1.GetX() - src2.GetX();
	double yFark = src1.GetY() - src2.GetY();            //noktalar uzaklýk farklarý  alýnýp kök içinden karelerin toplamý ile hesaplanýr...
	double zFark = src1.GetZ() - src2.GetZ();

	return sqrt(pow(xFark, 2) + pow(yFark, 2) + pow(zFark, 2));
}
