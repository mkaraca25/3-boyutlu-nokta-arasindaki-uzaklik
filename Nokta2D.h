

#ifndef NOKTA2D_H //ifndef, define ve endif  öniþlemci direktifleri Polinom Sýnýfý tanýmýnýn projenin 
#define NOKTA2D_H //birden fazla dosyasý içerisinde kullanýmýnýn nesne kodu (object code) bünyesinde tekrarýný engeller.
class Nokta2D //temel Nokta2D sýnýfýmýn adý
{
public: //public deðiþkenler
	Nokta2D(); //yapýcý constructor
	Nokta2D(double srcx, double srcy);
	Nokta2D(const Nokta2D& srcNokta2D);

	void SetX(double input);
	void SetY(double input);

	double GetX();
	double GetY();

	void print() const;

public: //private deðiþkenler
	double x;
	double y;
};
#endif
