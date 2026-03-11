#include<iostream>
using namespace std;
class vecteur3d
{
	float x,y,z;
	public:
		vecteur3d(float,float,float);
		int coincide(vecteur3d &);
		vecteur3d somme(vecteur3d &);
		void affiche();
		vecteur3d prodscalaire(vecteur3d &);
};
vecteur3d::vecteur3d(float c1,float c2,float c3)
{
	x=c1;y=c2;z=c3;
}
int vecteur3d::coincide(vecteur3d &v)
{
	if ((v.x==x)&&(v.y==y)&&(v.z==z))
	return 1;
	else return 0;
	
}
vecteur3d vecteur3d::somme(vecteur3d &s)
{
	vecteur3d sum(0.0,0.0,0.0);
	sum.x = s.x+x;  sum.y = s.y+y; sum.z = s.z+z;
	return sum;
}
void vecteur3d::affiche()
{
	cout<< x <<" " <<y <<" " <<z <<"\n";
}
vecteur3d vecteur3d::prodscalaire(vecteur3d &p)
{
	vecteur3d prod(0.0,0.0,0.0);
	prod.x=p.x*x;prod.y=p.y*y;prod.z=p.z*z;
	return prod;
}
main()
{
	vecteur3d v1(5.2,4.2,6.3),v2(5.2,4.2,6.3),v3(5.5,3.2,5.6);
	if (v1.coincide(v2) == 1)
	cout <<"v1 == v2" <<"\n";
	else
	cout<<"v1 != v2" <<"\n";
	if (v1.coincide(v3) == 1)
	cout <<"v1 == v3" <<"\n";
	else
	cout<<"v1 != v3" <<"\n";
	vecteur3d v4 (0.0,0.0,0.0);
	v4 = v1.somme(v2);
	v4.affiche();
	vecteur3d v5 (0.0,0.0,0.0);
	v5 = v1.prodscalaire(v2);
	v5.affiche();
}

