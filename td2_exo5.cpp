#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
		point(int,int);
		friend void affiche(point);
};
point::point(int abs, int ord)
{
	x = abs; y = ord;
}
void affiche (point p)
{
	cout<< p.x<<" " <<p.y <<"\n";
}
main()
{
	point a(5,3);
	affiche(a);
}