/*Melik KARACA 190757079 Bil.M�h.(�.�) C grubu 
Nesneye Y�nelik Programlama BIM-104-50-50-C Bahar 2020
PROJES� 3 Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER*/

#include "Nokta2D.h" //Nokta2D k�t�phanem
#include "Nokta3D.h"  //Nokta3D k�t�phanem

#include <iostream> //cin cout
#include <cmath> //matematik i�lemleri

double uzunlukHesaplama(Nokta3D& src1, Nokta3D& src2);

int main()
 {
 	
    setlocale(LC_ALL, "Turkish");  //t�rk�e karakterleri yazma
	double x, y, z;
	Nokta3D nokta1, nokta2;
	while (true)                 //noktalar� al�p aradaki uzal��� bulma d�ng�s�
	 {
			std::cout << "1. Noktan�n x, y, ve z koordinatlar�n�n degerler�n� giriniz:" << std::endl;
			std::cin >> x >> y >> z;
			nokta1.SetX(x);
			nokta1.SetY(y);
			nokta1.SetZ(z);

			std::cout << "2. Noktan�n x, y, ve z koordinatlar�n�n degerlerini giriniz:" << std::endl;
			std::cin >> x >> y >> z;
			nokta2.SetX(x);
			nokta2.SetY(y);
			nokta2.SetZ(z);

			std::cout << "2 nokta arasindaki uzakl�k = " << uzunlukHesaplama(nokta1, nokta2) << std::endl;
	}
}

double uzunlukHesaplama(Nokta3D& src1, Nokta3D& src2) //noktalar aras� uzakl��� hesaplama fonksiyonu
 {

	double xFark = src1.GetX() - src2.GetX();
	double yFark = src1.GetY() - src2.GetY();            //noktalar uzakl�k farklar�  al�n�p k�k i�inden karelerin toplam� ile hesaplan�r...
	double zFark = src1.GetZ() - src2.GetZ();

	return sqrt(pow(xFark, 2) + pow(yFark, 2) + pow(zFark, 2));
}
