#include<iostream>
using namespace std;
int a;
int b;
void echange(int &,int &);
void echange (int &, int &)
{
	int c = 0;
	c = a; a = b; b = c; 
}
main()
{
a = 2;
b = 5;
cout<< "avant echange a = " << a <<" b = " << b <<"\n";
echange(a,b);
cout<< "apres echange a = " << a <<" b = " << b <<"\n";
}