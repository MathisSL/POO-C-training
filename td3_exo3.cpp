#include<iostream>
using namespace std;
template<typename T> class point
{
	T x,y;//Coordonnees d'un point
	public:
		point(T,T);
		void affiche();
};
template <typename T> point<T>::point(T abs,T ord)
		{
			x=abs; y=ord;
		} 
template <typename T> void point<T>::affiche()
{
			cout<< "coordonnees : " <<x <<" " <<y <<"\n";
		}
template <typename T, typename U> class pointcol : public point<T>
{
	T x,y;
	U couleur;
	public:
		pointcol(T,T,U);

		void affiche()
		{
			point<T>::affiche();
			cout<< couleur ;
		}
};
template<typename T,typename U> pointcol<T,U>::pointcol(T abs,T ord, U cl) : point<T> (abs,ord)
{
	x = abs; y = ord; couleur = cl; 
}
main()
{
	pointcol<int,float> a(5,4,6.8);
	a.affiche();
}

 