

#ifndef NOKTA2D_H //ifndef, define ve endif  �ni�lemci direktifleri Polinom S�n�f� tan�m�n�n projenin 
#define NOKTA2D_H //birden fazla dosyas� i�erisinde kullan�m�n�n nesne kodu (object code) b�nyesinde tekrar�n� engeller.
class Nokta2D //temel Nokta2D s�n�f�m�n ad�
{
public: //public de�i�kenler
	Nokta2D(); //yap�c� constructor
	Nokta2D(double srcx, double srcy);
	Nokta2D(const Nokta2D& srcNokta2D);

	void SetX(double input);
	void SetY(double input);

	double GetX();
	double GetY();

	void print() const;

public: //private de�i�kenler
	double x;
	double y;
};
#endif
