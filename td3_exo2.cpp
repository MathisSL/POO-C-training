#include<iostream>
using namespace std;
template<typename T, typename U> class pointcol
{
T x,y;
U couleur;
	public :
		pointcol(T abs, T ord, U cl)
		{
			x= abs;y = ord; cl=couleur;
		}
		void affiche();
};
template<typename T,typename U> void pointcol<T,U>::affiche()
{
	cout<< x <<" " << y << " " <<couleur <<"\n";
}
main()
{
	pointcol <float,float> a (0.5,5.6,8.1);
	a.affiche();
}