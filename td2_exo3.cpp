#include<iostream>
using namespace std;
class point
{
	float x;
	float y;
	public:
		point(float,float);
		void deplace(float ,float );
		void affiche();
		float abscisse();
		float ordonnee();
};
point::point(float abs, float ord)
{
	x=abs ; y = ord;
}
void point::deplace(float c1,float c2)
{
	x=x+c1; y=y+c2;
}
float point::abscisse();
{
	return abs;
}
float point::abscisse();
{
	return ord;
}
main()
{
	point a(5.2,6.4);
	int d;
	cout<< "avant deplace : ";
	a.deplace(4.0,4.0);
	cout<< "apres deplacement : ";
}
