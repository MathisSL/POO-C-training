#include<iostream>
using namespace std;
struct essai
{
	int n;
	float x;
};
void raz(struct essai  &e)
{
	e.n=0;
	e.x=0.0;
}
main()
{
	struct essai a;
	a.n=5;
	a.x=2.6;
	cout<< "avant raz n =" << a.n <<" x = " << a.x <<"\n";
	raz(a);
	cout<< "apres raz n =" << a.n <<" x = " << a.x <<"\n";
}