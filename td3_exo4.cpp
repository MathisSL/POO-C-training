#include<iostream>
using namespace std;
template<typename T> class vecteur3d
{
	T x,y,z;
	public:
		vecteur3d(T c1,T c2,T c3)
		{
			x=c1;y=c2;z=c3;
		}
		void affiche()
		{
			cout<< "Composantes : " <<x <<" " <<y <<" " <<z <<"\n";
		
		}
		friend int coincide (vecteur3d &w, vecteur3d &v)
{
	int cd;
	if ((w.x==v.x)&&(w.y==v.y)&&(w.z==v.z))// ne pas oublier == et non = pure
	cd = 1;
	else cd =0;
	return cd;
}		
};
main()
{
	vecteur3d <int> v1(5,6,7);
	vecteur3d <int> v2(5,6,7);
	vecteur3d <int> v3(5,7,7);
	v1.affiche();
	v2.affiche();
	v3.affiche();
	coincide(v1,v2);
	if ((coincide(v1,v2)) ==1)
	{
	cout<< "v1 = v2" <<"\n";
	}
	else
	{
		cout<< "v1 != v2 " <<"\n";
	}
	coincide(v1,v3);
	if ((coincide(v1,v3))==1)
	{
		cout<< "v1 = v3" <<"\n";	
	}
	
	else
	{
	cout<< "v1 != v3 " <<"\n";	
	}
	
}