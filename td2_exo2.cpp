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
};
point::point(float abs, float ord)
{
	x=abs ; y = ord;
}
void point::affiche()
{
	cout<< x <<" " <<y <<"\n";
}
void point::deplace(float c1,float c2)
{
	x=x+c1; y=y+c2;
}
main()
{
	point a(5.2,6.4);
	int d;
	cout<< "avant deplace : "; a.affiche();
	a.deplace(4.0,4.0);
	cout<< "apres deplacement : ";
	a.affiche();
}
